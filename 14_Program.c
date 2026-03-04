//Average of three numbers
#include <stdio.h>

int main() 
{
    float no1, no2, no3, avg;

    printf("Enter three numbers\n");
    scanf("%f%f%f",&no1, &no2, &no3);

    avg = (no1 + no2 + no3) / 3;

    printf("Average of numbers is %6.2f\n", avg);
    return 0;
}

