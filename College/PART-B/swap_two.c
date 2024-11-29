#include <stdio.h>
void main () {
    int A,B,temp;
    printf("Enter value of A");
    scanf("%d",&A);
    printf("Enter value of B");
    scanf("%d",&B);
    printf("\nBefore swapping A = %d B = %d\n\n",A,B);
    temp = A;

    A = B;

    B = temp;

    printf("After swapping A = %d B = %d\n",A,B);
}