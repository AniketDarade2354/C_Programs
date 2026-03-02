//Swap two numbers
#include <stdio.h>

int main() 
{
    int num1, num2, num3;

    printf("Enter numbers\n");
    scanf("%d\n%d",&num1, &num2);
    
    printf("Numbers before swap %d %d\n",num1, num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("Numbers after swap %d %d\n",num1, num2);
    
    return 0;
}
