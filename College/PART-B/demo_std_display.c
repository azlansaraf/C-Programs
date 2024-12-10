#include <stdio.h>
struct student 
{
 char firstName[50];
 int roll;
 int marks;
} s[10];
void main() 
{
 int i,n;
 printf("Enter no. of students:");
 scanf("%d",&n);
 printf("\nEnter information of students:\n");
 // storing information
 for (i = 0; i < n; i++) 
 {
 printf("Enter the roll no. : ");
 scanf("%d",&s[i].roll);
 printf("Enter name: ");
 scanf("%s", s[i].firstName);
 printf("Enter marks: ");
 scanf("%d", &s[i].marks);
 }
 printf("\n\nDisplaying Information:");
 // displaying information
 for (i = 0; i < n; i++) 
 {
 printf("\nRoll number: %d\n",s[i].roll);
 printf("First name: ");
 puts(s[i].firstName);
 printf("Marks: %d", s[i].marks);
 printf("\n");
 }
 
}

