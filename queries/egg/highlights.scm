;; Literals
(literal_string)  @string
(literal_int) @number
(literal_float) @float
(literal_bool) @boolean
(line_comment) @comment

;; Identifiers
(_ type_def: (ident) @type)
(_ function_def: (ident) @function)
(_ variable_def: (ident) @variable)
(_ type_use: (ident) @type)
(_ function_use: (ident) @function)
(_ variable_use: (ident) @variable)
(_ option: (ident) @constant)

;; Keywords
[
 "set-option" "datatype" "sort" "function" "declare" "relation" "ruleset" 
 "rule" "rewrite" "birewrite" "run" "simplify" "calc" "query-extract" "check" 
 "check-proof" "run-schedule" "print-stats" "push" "pop" "print-function" 
 "print-size" "input" "output" "fail" "include" "let" "set" "delete" "subsume" 
 "union" "panic" "extract"
] @keyword

;; Conditionals
[
 ":cost" ":unextractable" ":on_merge" ":merge" ":default" ":subsume" ":when" 
 ":ruleset" ":name" ":until" ":variants"
] @conditional

;; Punctuation
[ "(" ")" ] @punctuation

;; Operators
[ "=" ] @operator
