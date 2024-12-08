#include <stdio.h>

//function to get matrix elements entered by the user
void read(int matrix[10][10],int row,int column) {
    printf("\nEnter elements: \n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    
}
void multiply(int fir[10][10],int sec[10][10],int res[10][10],int r1,int c1,int r2,int c2) {
    // Multiplying first and second matrices and storing it in result
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                res[i][j] += fir[i][k] * sec[k][j];
            }
            
        }
        
    }
    
}
void display (int res[][10],int row,int column)
{
    printf("\nOutput Matrix: \n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
void main () {
    int first[10][10],second[10][10],result[10][10] = {10},r1,c1,r2,c2;
    printf("Enter rows and column for the first matrix: ");
    scanf("%d, %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: ");
    scanf("%d, %d", &r2, &c2);
    read(first, r1, c1);

    //get elements of the second matrix
    read(second, r2, c2);

    //multiply two matrices
    multiply(first,second,result,r1,c1,r2,c2);

    //display the result
    display(result,r1,c2);
}
