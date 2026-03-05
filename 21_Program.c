//Increment/ Decrement operators operand
#include <stdio.h>

int main() 
{
    int a;

    a = ++2; //Compilation error "L- value required"
    printf("The result of application of pre-increment operator is %d\n", a);
    return 0;
}
