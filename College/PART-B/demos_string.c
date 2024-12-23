#include <stdio.h>
#include <string.h>
void main () {
    char str1[20] = "BIMS",str2[20] = "BCA";
     printf("Length of string %s is: %ld\n",str1,strlen(str1));
     printf("Length of string %s is: %ld\n",str2,strlen(str2));
     printf("First string after concatenation: %s\n", strcat(str1,str2));
     printf("First string after copying: %s\n", strcpy(str1,str2));
   
    if (strcmp(str1,str2) == 0)
    {
        printf("string 1 and string 2 are equal\n");
    }
    else
    {
        printf("string 1 and 2 are not equal\n");
    }
    
}  