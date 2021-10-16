//Write a c program to multiply two matrices.

#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("enter the 9 value of matrix A\n");
    for ( i = 0; i <= 2; i++)
    {
    for ( j = 0; j <= 2; j++)
    {
        scanf("%d",&A[i][j]);
    }
    
    }
    printf("enter the 9 value of matrix B\n");
    for ( i = 0; i <= 2; i++)
    {
    for ( j = 0; j <= 2; j++)
    {
        scanf("%d",&B[i][j]);
    }
    
    }
    for ( i = 0; i <= 2; i++)
    {
    for ( j = 0; j <= 2; j++)
    {
        C[i][j]=A[i][j]*B[i][j];
        printf("%d ",C[i][j]);
    }
    
        printf("\n");
    }
}