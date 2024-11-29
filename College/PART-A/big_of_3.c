#include <stdio.h>
void main () {
    int n1,n2,n3;
    printf("Enter Three Numbers\n");
    scanf("%d, %d, %d", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3)
    {
        printf("%d is the largest number.\n", n1);
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("%d is the largest number.\n", n2);
    }
    else
    {
        printf("%d is the largest number.\n",n3);
    }
    
}