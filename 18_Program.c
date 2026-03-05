//Compute velocity after time t
#include <stdio.h>

int main() 
{
    float u, v, a, t;
    
    printf("Enter the value of initial velocity in m/s \n");
    scanf("%f",&u);

    printf("Enter the amount of acceleration \n");
    scanf("%f",&a);
    
    printf("Enter the time in sec. \n");
    scanf("%f",&t);
    
    v = u + a * t;

    printf("Velocity after %4.2f sec is %4.2f m/s \n",t , v);
    return 0;
}
