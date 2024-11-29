#include <stdio.h>
void main () {
    int num,sum = 0;
    printf("Enter numbers to :\n");
    while (1)
    {
        scanf("%d",&num);
        if (num == 999)
        break;
        else
        {
            if (num > 0)
            {
                sum += num;
            }
            
        }
        
    }
    printf("Sum of positive numbers is %d",sum);
}