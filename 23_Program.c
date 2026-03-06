//++ is a token.Don't place white space in between + symbols
#include <stdio.h>

int main() 
{
    int a;

    a =+ +2;
    printf("The result of evaluation is %d\n", a);
  
    return 0;
}
