//Simple Interest
#include <stdio.h>

int main() 
{
    float p, roi, t, i, amt;

    printf("Enter principle, rate and time\n");
    scanf("%f%f%f",&p, &roi, &t);

    i = p * roi * t / 100;

    amt = p * i;

    printf("Interest is %6.2f\n", i);
    printf("Amount is %6.2f\n", amt);

    return 0;
}

