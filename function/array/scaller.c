//write a c program to perform scalar matrix multiplication.

#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],i,j,n;
    printf("enter 9 value of matrix A\n");

    for ( i = 0; i <= 02; i++)
    {
        for ( j = 0; j <= 02; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("enter the vlaue of scaller n\n");
    scanf("%d",&n);
    for ( i = 0; i <= 02; i++)
    {
        for ( j = 0; j <= 02; j++)
        {
            B[i][j]=n*A[i][j];
            printf("%d ",B[i][j]);
        }
        
        printf(" \n");
    }
    
}