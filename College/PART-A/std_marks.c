#include <stdio.h>
void main () {
    int i;
    float mark[5],sum = 0,avg;
    printf("Enter Marks obtained is 5 Subject:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf ("%f", &mark[i]);
        sum = sum + mark [i];
    }
    avg = sum / 5;
    printf("\nAverage Marks = %f",avg);
    
}