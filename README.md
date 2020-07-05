# Spec

## Basic Types

Type names start with an upper case letter, no other identifier may start with an upper case letter.

| Type     | Values                        |
| -------- | ----------------------------- |
| `Bool`   | `true` or `false`             |
| `Int`    | 64-bit integer numbers        |
| `Double` | 64-bit floating point numbers |
| `String` | UTF-8 strings                 |
| `Regex`  | Regular expressions           |
| `Unit`   | None (the empty set)          |

## Type Binding

A type binding represents a 3-tuple of label, type, and value. Any of the three elements may be missing using a "hole", represented by `_`. The type binding can be read as "label has type X and value x", where the value `x` is a member of the set of all `X` values.

Bare type:

```coffee
Bool

# Desugared
_ :: Bool = _
```

Labelled type:

```coffee
a :: Bool

# Desugared
a :: Bool = _
```

Labelled value:

```coffee
a = true

# Desugared
a :: _ = true

# After type inference
a :: true = true
```

Full type binding:

```coffee
a :: Bool = true
```

## Literal Label

To refer to a label by its literal name, rather than resolving its type of value, its name is followed by a colon suffix:

```coffee
let a = 123

a  # => 123
a: # => a :: _ = _
```

## Let

The `let` keyword takes a labelled type binding and creates a reference to that label in the current scope, allowing the binding to be referred to by that label.

With specified types:

```coffee
let a :: Bool    = true
let b :: Int     = 123
let c :: Double  = 1.23
let d :: String  = "hello"
let e :: Regex   = /[0-9]+/
let f :: Unit    = ()
```

Without specified types (inference):

```coffee
let a = true
let b = 123
let c = 1.23
let d = "hello"
let e = /[0-9]+/
let f = ()
```

## Literals

Literal values can appear in type specifiers:

```coffee
a :: "value"
b :: 123

# inferred as the literal string type "x"
let x = "x"
```

## Sets

Sets represent a collection of type bindings and are represented using parentheses:

```coffee
# Set of an integer and a double
(Int, Double)

# Set of the numbers 123 and 456
(123, 456)

# Set of the number 123, labelled by a, and 456, labelled by b
(a = 123, b = 456)

# Set of the an integer, labelled by a, and an integer, labelled by b
(a :: Int, b :: Int)
```

## Records

Concepts like records can be represented using sets of labelled values. Keys are order-independent.

Without a type signature:

```coffee
let jacob = (
  first = "Jacob"
  last  = "Gillespie"
  age   = 28
)

# Desugared
let jacob = (
  first :: _ = "Jacob"
  last  :: _ = "Gillespie"
  age   :: _ = 28
)

# After type inference:
let jacob = (
  first :: "Jacob"     = "Jacob"
  last  :: "Gillespie" = "Gillespie"
  age   :: 28          = 28
)
```

With type signatures:

```coffee
let Person = (
  first :: String
  last  :: String
  age   :: Int
)

let jacob :: Person = (
  first :: String = "Jacob"
  last  :: String = "Gillespie"
  age   :: Int    = 28
)
```

## Tuples

Tuples are ordered sets of type bindings and are represented using square brackets:

```coffee
# An integer followed by a double
[Int, Double]

# The number 123 followed by the number 456
[123, 456]
```

Tuples can also have variable length. This can represent traditional concepts like arrays, or more advanced structures.

```coffee
# A list of zero or more integers
[...Int]

# A string followed by a list of zero or more integers
[String, ...Int]
```

## Type Union

Type unions represent a type that can be either type A or type B:

```coffee
A | B

let Country = "US" | "UK"
let example :: Country = "US"

let Day = "Monday"
| "Tuesday"
| "Wednesday"
| "Thursday"
| "Friday"
| "Saturday"
| "Sunday"
```

For visual convenience, the first member can be preceded by a vertical bar when defining a type binding:

```coffee
let Day =
  | "Monday"
  | "Tuesday"
  | "Wednesday"
  | "Thursday"
  | "Friday"
  | "Saturday"
  | "Sunday"
```

## Type Intersection

Type intersections represent a type that must be both A and B:

```coffee
A & B
```

## Optional Type

Optional types can be represented as the union of a type and the unit type. A convenience `?` syntax exists for expressing this union:

```coffee
String?

# Desugared
(String | ())
```

## Set Selection

If given a set of values, set selection extracts values that pattern-match a specified predicate:

```coffee
let person = (name = "Jacob", age = 28)

person(name:) # => name :: "Jacob" = "Jacob"
person(28)    # => age  :: 28      = 28
```

Since accessing set values by their label is common, the `set.label` syntax exists as shorthand:

```coffee
person.age

# Desugared
person(age:)
```

## Blocks

A block is represented by curly braces surrounding a body, where the last line of the block represents its returned type. The block creates a new child scope, so any labels defined inside the block are not accessible outside.

```coffee
let a = {
  let b = 1
  let c = 2

  b + c
}

# the block's type is a :: Int = 3
# b and c are not accessible outside the block
```

## Function

Functions are a mapping from one type binding to another, and are represented by an arrow `->`. Functions make any labelled input type labels available to reference in their output, like `let`.

```coffee
# Identity function
x -> x

# Double any number
x :: (Int | Double) -> x * 2

# Using a block
x :: Int -> {
  let a = x
  let b = x

  a + b
}
```

Functions only accept a single argument, but that argument can be a set of labelled values:

```coffee
# Add two numbers
(a :: Int, b :: Int) -> a + b
```

Return types can have labels:

```coffee
# Takes in any input and returns the same input labelled with a
x -> a = x
```

Both the input and the output are labelled type bindings:

```coffee
x -> x

# Desugared
(x :: _ = _) -> (_ :: _ = x)
```

Note that the right-hand side represents the value position of a type binding.

Since a function's input value can be a set, application can behave like "keyword arguments" in other languages:

```coffee
let greet = (name :: String, greeting :: String) -> {
  "#{greeting}, #{name}"
}

greet(greeting = "Hola", name = "Jacob")
# => "Hola, Jacob"
```

More on application below.

## Application

Function application is accomplished with parentheses:

```coffee
let double = x -> x * 2

let four = double(2)
```

Function application mirrors set selection by first finding a function in the set of values that would accept

```coffee
let double = (
  (x: Int)    -> x * 2
  (x: String) -> "${x}${x}"
)

let four = double(2)
let hihi = double("hi")
```
