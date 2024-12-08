#include <stdio.h>
int isprime(int n) {
    int i;
    for ( i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
                return 0;
    }
    return 1;
    
}
void main () {
    int num,res = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

 if (isprime(num))
 {
    printf("\n %d is a prime number",num);
 }
 else
 {
    printf("\n %d is not a prime number",num);
 }
  
}
