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

### Order of Subexpression Evaluation

we don't know in the expression (a+b)*(c-d) whether (a+b) will be evaluated before (c-d)

see tricky3.c

## Q&A

> notice C has no power 
Raising an integer to small positive integer is best done by repeated multiplication.
To raise a number to a nonint power, call pow function

> I wan tto apply % operator to floating-point operand
Try the fmod. % requires integer operands. 

> Why are using / and % complicated when it is done with negative operands
The goal is to ensure value of (a/b) * b + a % b will always be equal to a.
The problem is there are two ways for a/b and a%b. For example, -9/7 can be -1 or -2 and -9%7 can be -2 and 5. 
one truncates to zero and another doesn't, but the result here are the same
-1 * 7 + -2 and -2 * 7 + 5 are equal, -9.




