#include <stdio.h>
void main () {
    float radius,area,circumference;
    printf("\nEnter the radius of Circle :");
    scanf("%f", &radius);
    area = (3.142 * radius * radius);
    circumference = (2 * 3.142 * radius);
    printf("\nArea of Circle :%f\n", area);
    printf("\nCircumference of Circle :%f\n", circumference);
}