//Add two numbers
#include <stdio.h>

int main() 
{
    int num1, num2, num3;

    printf("Enter numbers\t");
    scanf("%d %d",&num1, &num2);

    num3 = num1 + num2;

    printf("The sum is %d\n", num3);

    return 0;
}
