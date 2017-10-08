#include <stdio.h>
#include "math.h"


int math(int num1, int num2, char Oper)
{
	switch(Oper)
	{
		case('+') :  return num1 + num2;
		case('-') :  return num1 - num2;
		case('*') :  return num1 * num2;
		case('/') :  return num1 / num2;
		case('%') :  return num1 % num2;
		default   :  return 0;
	}
}
