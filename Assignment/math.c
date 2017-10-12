#include <stdio.h>
#include "math.h"
/* Inputs are 2 integers and the operator for the function you wish to execute
	- If the operation is division or modulo the order of the numbers is Numerator then Denominator
/  Output is the result of the function on your 2 integers
*/

int math(int num1, int num2, char Oper)
{
	switch(Oper)							//  Check the operator to determine which function to perform
	{
		case('+') :  return num1 + num2;	// Adition
		case('-') :  return num1 - num2;	// Subtraction
		case('*') :  return num1 * num2;	// Multiplication
		case('/') :  return num1 / num2;	// Division
		case('%') :  return num1 % num2;	// Modulo
		default   :  return 0;
	}
}
