When int and float operands are mixed the result has type float

result of a/b when one of them is negative, it truncated toward 0
result of a%b follows sign of a. ex) -9%7 is -2

### Assignment Operators

#### Simple Assignment

```
int i;
float f;
i = 72.00f; /* i is now 72 */
f = 136; /* f is now 136.0 */

```

#### Lvalues

Most C operators allow their operands to be variables, constants, or expressions containing other operators.

The assignment operator, however, requires an lvalue as its left operand.

Variables are lvalues
not a constant or a result of a computation

There are other lvalues 

We can define a macro that can be used as a type in C89
```
#define BOOL int

BOOL flag;
```


### Expression Evaluation




