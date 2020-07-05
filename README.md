# Spec

## Binding Tuple

A binding tuple represents a 3-tuple of label, type, and value. Any of the three elements may be missing, represented by a `_` anonymous placeholder or `?name` named placeholder. The binding can be read as "label has type X and value x", where the value `x` is a member of the set of all `X` values.

Bare type:

```coffeescript
Bool

# Desugared
_ :: Bool = _
```

Labelled type:

```coffeescript
a :: Bool

# Desugared
a :: Bool = _
```

Labelled value:

```coffeescript
a = true

# Desugared
a :: _ = true

# After type inference
a :: true = true
```

With named placeholders:

```coffeescript
# A binding with an unknown label, Bool type, and true value
?label :: Bool = true

# A binding with a label, unknown type, and unknown value
a :: ?Type = ?value

# A binding with a label and known type, but unknown value
a :: Bool = ?value
```

Full type binding:

```coffeescript
a :: Bool = true
```

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

## Literal Type

Literal values can appear in type specifiers:

```coffeescript
a :: "value"
b :: 123

# inferred as the literal string type "x"
let x = "x"
```

## Labels

Values can be labeled via a binding tuple:

```coffeescript
let a = 123
let b = 456
let c = 789

let hello = a
println(hello) #=> prints 123
```

Labels can be comprised of any string value, but only well-named labels can be referred to using the "bare" syntax. Well-named labels begin with a letter and are followed by zero or more letters, numbers, or underscores. All other labels use the following syntax:

```coffeescript
let :"a" = 123
let :"b" = 456
let :"c" = 789

let :"hello" = :"a"
print(hello)   #=> prints 123
print(:hello)  #=> prints 123
```

Additionally, well-named labels can omit the quotes when using symbol syntax:

```coffeescript
let :a = 123
let :b = 456
let :c = 789

let :hello = :a
print(hello)   #=> prints 123
print(:hello)  #=> prints 123
```

### Label Literal

As demonstrated above, labels outside of the label binding position are resolved into values. To instead refer to a label value literally, the label can be extracted using a named placeholder:

```coffeescript
let a    = 123
let :b   = 456
let :"c" = 789

# Extracts the label of its input and moves it to the value position of its binding
let labelOf = ?Label :: _ -> ?Label

labelOf(a) #=> _ :: _ = :a
labelOf(b) #=> _ :: _ = :c
labelOf(c) #=> _ :: _ = :c

# Labelling the label :)
let labelOf = ?Label :: _ -> label = ?Label

labelOf(a) #=> label :: _ = :a
```

Since it may be commonly desirable to refer to a label by its literal, a short syntax is available using `::name`:

```coffeescript
let a = 123

println(a)     #=> prints 123
println(:a)    #=> prints 123
println(::a)   #=> prints :a
println(::"a") #=> prints :a
```

It is also possible to convert a label literal back into a reference, again using named placeholders:

```coffeescript
let valueOf = (_ :: Label = ?label) -> (?label :: _ = _)

let a = 123

println(a)            #=> prints 123
println(valueOf(::a)) #=> prints 123
println(valueOf(a))   #=> ERROR
```

Since it is less common to resolve a symbol literal in the current scope, there is no short syntax for this operation.

### Label Rebinding

When binding labels to values, the binding will overwrite any previous label the value held:

```coffeescript
let a = 123
let b = a

labelOf(b) #=> :b
```

It is possible to preserve the label of a value using a named placeholder:

```coffeescript
let a = 123

# Let-binding a named placeholder
let ?b = a
labelOf(?b) #=> :a

# Using a new label
let double = x -> x * 2
labelOf(double(a)) #=> :x

# Using a named placeholder
let double = ?x -> ?x * 2
labelOf(double(a)) #=> :a
```

### Let

The `let` keyword takes a labelled type binding and exposes that label in the current scope, allowing the binding to be referred to by the label.

With specified types:

```coffeescript
let a :: Bool    = true
let b :: Int     = 123
let c :: Double  = 1.23
let d :: String  = "hello"
let e :: Regex   = /[0-9]+/
let f :: Unit    = ()
```

Without specified types (inference):

```coffeescript
let a = true
let b = 123
let c = 1.23
let d = "hello"
let e = /[0-9]+/
let f = ()
```

## Placeholder

A placeholder represents a value, type, or label that the programmer has not specified that will either be resolved later by the compiler, type inference, or runtime, or which is not important to the program.

### Anonymous Placeholder

The anonymous placeholder is represented by a single `_`, which represents a placeholder which will not be accessible as a named entity at any future point, i.e. the programmer does not care what the placeholder resolves to.

```coffeescript
# a is a binding with any value
let a = _

# 123 is bound to the anonymous placeholder, and will not be accessible later any name
let _ = 123

# fn is a function that takes a String and always returns 123
let fn = (_ :: String) -> 123

# fn is a function that takes a variable of an unknown type and returns 321
let fn = (x :: _) -> 321
```

### Named Placeholders

Named placeholders differ from anonymous placeholders in that they create a label that can be used to reference the placeholder later in the scope. Named placeholders begin with a question mark `?` followed by the placeholder name:

```coffeescript
# typeOf takes any value and returns that value's type
let typeOf = (_ :: ?Type) -> ?Type

# labelOf takes any value and returns that value's label
let valueOf = (?label :: _) -> ?label
```

## Sets

Sets represent a collection of type bindings and are represented using parentheses:

```coffeescript
# Set of an integer and a double
(Int, Double)

# Set of the numbers 123 and 456
(123, 456)

# Set of the number 123, labelled by a, and 456, labelled by b
(a = 123, b = 456)

# Set of the an integer, labelled by a, and an integer, labelled by b
(a :: Int, b :: Int)
```

### Records

Concepts like records can be represented using sets of labelled values. Keys are order-independent.

Without a type signature:

```coffeescript
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

```coffeescript
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

```coffeescript
# An integer followed by a double
[Int, Double]

# The number 123 followed by the number 456
[123, 456]
```

Tuples can also have variable length. This can represent traditional concepts like arrays, or more advanced structures.

```coffeescript
# A list of zero or more integers
[...Int]

# A string followed by a list of zero or more integers
[String, ...Int]
```

Tuples can contain labelled values:

```coffeescript
# A string labelled :first followed by a string labelled :last
[first :: String, last :: String]
```

## Union Type

Type unions represent a type that can be either type A or type B:

```coffeescript
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

```coffeescript
let Day =
  | "Monday"
  | "Tuesday"
  | "Wednesday"
  | "Thursday"
  | "Friday"
  | "Saturday"
  | "Sunday"
```

### Optional

Optional types can be represented as the union of a type and the unit type. A convenience `?` syntax exists for expressing this union:

```coffeescript
String?

# Desugared
(String | ())
```

## Intersection Type

Type intersections represent a type that must be both A and B:

```coffeescript
A & B
```

## Set Selection

If given a set of values, set selection extracts values that pattern-match a specified predicate:

```coffeescript
let person = (first = "Jacob", last = "Gillespie", age = 28)

person(:first) #=> first :: "Jacob" = "Jacob"
person(28)     #=> age   :: 28      = 28

let key = :last
person(key) #=> last :: "Gillespie" = "Gillespie"
```

Since accessing set values by their label is common, the `set.label` syntax exists as shorthand:

```coffeescript
person.age

# Desugared
person(age:)
```

## Blocks

A block is represented by curly braces surrounding a body, where the last line of the block represents its returned type. The block creates a new child scope, so any labels defined inside the block are not accessible outside.

```coffeescript
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

```coffeescript
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

```coffeescript
# Add two numbers
(a :: Int, b :: Int) -> a + b
```

Return types can have labels:

```coffeescript
# Takes in any input and returns the same input labelled with a
x -> a = x
```

Both the input and the output are labelled type bindings:

```coffeescript
x -> x

# Desugared
(x :: _ = _) -> (_ :: _ = x)
```

Note that the right-hand side represents the value position of a type binding.

Since a function's input value can be a set, application can behave like "keyword arguments" in other languages:

```coffeescript
let greet = (name :: String, greeting :: String) -> {
  "#{greeting}, #{name}"
}

greet(greeting = "Hola", name = "Jacob")
#=> "Hola, Jacob"
```

### Function Application

Function application is accomplished with parentheses:

```coffeescript
let double = x -> x * 2

let four = double(2)
```

Function application mirrors set selection by first finding a function in the set of values that would accept

```coffeescript
let double = (
  (x: Int)    -> x * 2
  (x: String) -> "${x}${x}"
)

let four = double(2)
let hihi = double("hi")
```

## Modules

Modules provide a mechanism for
