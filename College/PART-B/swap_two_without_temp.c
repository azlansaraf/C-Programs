#include <stdio.h>
void main () {
    int A,B;
    printf("Enter value of A: ");
    scanf("%d", &A);
    printf("Enter value of B: ");
    scanf("%d", &B);
    printf("\nBefore swapping A = %d, B = %d\n\n",A,B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("After swapping A = %d, B = %d\n", A,B);
    
}