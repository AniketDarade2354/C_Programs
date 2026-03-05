//Converts units of velocity
#include <stdio.h>

int main() 
{
    float velk, velm;

    printf("Enter velocity in Km/hr \n");
    scanf("%f",&velk);

    velm = velk * 5 / 18;

    printf("Equivalent velocity is %f m/sec \n", velm);
    return 0;
}
