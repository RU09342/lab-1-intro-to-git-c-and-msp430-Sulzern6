#Nathan Sulzer
#Embedded Systems
#Lab 1 
# Math Function For MSP430
This File is a math function for the ambiguous processor MSP430 that can perform 5 different functions on a set up 2 intergrals. This can be used for systems that are recieving math operations from a outside communication like UART.

# Dependencies
Everything needed to implement this code is available in the dirctory containing this document. The math.c file contains the actual code that implements the math function and the math.h file is the header file. The only non provided dependency is a MSP430 processor to run the code on.

# Usage
After including the files in your project directory and call the function. The function can be called as seen below with 2 integers and a character operator that decides what function is performed.
```c
Math(int1, int2, operator);
```

## Valid Inputs

### int1, int2
16-bit signed integers
### operator
char which is valid for the following values ['+', '-', '*', '/', '%']. Math() will return Null if this input it invalid.

# Functions

## Add (char = '+')
Finds the Sum of the integer inputs uses operator "+".
### Example (10 + 20)
```c
Math( 10, 20, '+');
```

## Subtract (char = '-')
Finds the Difference of the integer inputs uses operator "-".
### Example (10 - 20)
```c
Math( 10, 20, '-');
```

## Multiply (char = '*')
Finds the Product of the integer inputs uses operator "*".
### Example (10 * 20)
```c
Math( 10, 20, '*');
```

## Divide (char = '/')
Finds the Quotient of the integer inputs uses operator "/". The first int will be the dividend and the second int will be the divisor.
### Example (10 / 2)
```c
Math( 10, 2, '/');
```

## Modulo (char = '%')
Finds the Remainder of the division of the integer inputs uses operator "%". The first int will be the dividend and the second int will be the divisor.
### Example (10 % 2)
```c
Math( 10, 2, '/');
```
