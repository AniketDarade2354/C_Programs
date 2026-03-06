//Operands of the modulus operator must be of integer type
#include <stdio.h>

int main() 
{
    int a;

    a = 2 % 3.0;    //error: invalid operands to binary % (have ‘int’ and ‘double’)
    printf("The value of a is %d\n", a);
    
    return 0;
}
