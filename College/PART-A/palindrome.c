#include <stdio.h>
void main () {
    int n,num,digit,rev = 0,sum = 0;
    printf("enter one number\n");
    scanf("%d",&n);
    num = n;
    while (n != 0)
    {
        digit = n % 10;
        sum += digit;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf("Sum of digits of %d is %d\n",num,sum);
    printf("reverse of %d is %d\n",num,rev);
    if (num == rev)
    {
        printf("%d is palindrone",num);
    }
    else {
        printf("%d is not palindrone",num);
    }
}