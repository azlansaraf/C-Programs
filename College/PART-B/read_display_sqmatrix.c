#include <stdio.h>
void main () {
    int a[10][10],m,i,j,sum;
    printf("\n Enter order of the square matrix :");
    scanf("%d",&m);
    printf("\n Enter the matrix \n");
    for( i=0; i<m;i++){
    for ( j=0; j<m; j++)
    scanf ("%d", &a[i ][ j ]);
    printf("\nGiven matrix is\n");
    for( i=0; i<m;i++)
    {
    for ( j=0; j<m; j++)
    printf("%d\t", a[i ][ j ]);
    printf("\n");
    }
    sum = 0;
    for ( i=0; i<m; i++)
    sum = sum + a[i ][ i ];
    printf ("\n trace of the matrix = %d", sum);    
    }

}