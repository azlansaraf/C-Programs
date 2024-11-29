#include <stdio.h>
#include <math.h>
void main () {
    float a = 1.8;
    float x = 100;
    printf("ceil = %f\n",ceil(a));
    printf("floor = %f\n",floor(a));
    printf("The absolute value of %f is %f \n",a,fabs(a));
    printf("log10(%f) = %lf\n", x, log10(x));
    printf("Square root of %lf is %lf\n", x, sqrt(x) );
    printf("Value 5.0 ^ 3 = %lf\n", pow(5, 3));
    printf("The cosine of %lf is %lf degrees\n", x, cos(x));

}