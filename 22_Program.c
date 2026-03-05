//Difference between Pre-increment and Post-increment
#include <stdio.h>

int main() 
{
    int a = 2,b = 2, c ,d;

    c = ++a;
    d = b++;

    printf("a = %d\t, b = %d\t, c = %d\t, d = %d\n",a,b,c,d);
    return 0;
}
