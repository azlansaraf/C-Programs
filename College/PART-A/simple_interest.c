#include <stdio.h>
#include <math.h>
void main () 
{
    float p,t,r,si;
    printf("Enter the value of principle, time and rate of interest. ");
    scanf("%f,%f,%f",&p,&t,&r);
    si = (p*t*r)/100;
    printf("\nThe simple interest is = %f \n",si);
}