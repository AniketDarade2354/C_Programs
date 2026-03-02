//Swap two numbers without using a third number
#include <stdio.h>

int main() 
{
    int num1, num2;

    printf("Enter numbers\n");
    scanf("%d\n%d",&num1, &num2);

    printf("Numbers before swap %d %d\n",num1, num2);

    num2 = num1 + num2;
    num1 = num2 - num1;
    num2 = num2 - num1;
    
    printf("Numbers after swap %d %d\n",num1, num2);
    return 0;
}
