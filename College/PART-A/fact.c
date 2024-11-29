#include <stdio.h>
void main () {
    int n, fact = 1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The Factorial of %d is %d\n",n,fact);
    
}