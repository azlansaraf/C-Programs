#include <stdio.h>
void main () {
    char str[10];
    int count = 0;
    printf("\n Please Enter any String:");
     fgets(str, sizeof(str), stdin);

    while (str[count] != '\0')
     count++;
     printf("\n String length = %d\n",count);
}