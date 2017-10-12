#include <stdio.h>
#include "math.h"

int main()
{
    printf("13 + 9 = %d \n", math(13,9,'+'));
    printf("4 - 14 = %d \n", math(4,14,'-'));
    printf("8  * 6 = %d \n", math(8,6,'*'));
	printf("12 / 3 = %d \n", math(12,3,'/'));  
	printf("12 % 5 = %d \n", math(12,5,'%'));
    return 0;
}
