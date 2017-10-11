#include <stdio.h>
#include "math.h"

int main()
{
    printf("12 / 3 = %d \n", math(12,3,'/'));   // This tests the math code with the values listed
    printf("8  * 6 = %d \n", math(8,6,'*'));
    printf("14 - 4 = %d \n", math(14,4,'-'));
    printf("13 + 9 = %d \n", math(13,9,'+'));
    printf("12 % 5 = %d \n", math(12,5,'%'));

    return 0;
}
