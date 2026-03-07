//Use of comma operator
#include <stdio.h>

int main() 
{
    int a, b;
    
    a = 1, 2, 3, 4, 5;
    b = (1, 2, 3, 4, 5);

    printf("Resultant values of a and b are:\n");
    printf("%d %d\n",a, b);
    return 0;
}
