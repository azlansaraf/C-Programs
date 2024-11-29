#include <stdio.h>
void main () {
    char str[10],Rev[10];
    int i, j = 0,count = 0;
    printf("\n Please Enter any String :");
    scanf("%s",str);
    while (str[count]!= '\0')
    count++;
    for ( i = count-1; i >=0; i--)
    {
        Rev[j++] = str[i];
    }
    Rev[j] = '\0';
    printf("\n String after Reversing = %s\n",Rev);
    
}