//write a c program to enter element in two matrices and check whether both matrices are equal or not.

#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],i,j,isequal;
    printf("enter the 9 value of matrix A\n");
    for (i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("enter the 9 value of matrix B\n");
    for (i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    }
    isequal=1;
         
    for (i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            if (A[i][j]!=B[i][j])
            {
                isequal=0;
                break;

            }
        }
        
    }
    if (isequal==1)
    
            {
                printf("matrix A equal to matrixB\n");
            
            }
            else
            {
                printf("matrix A is not equal to matrix B\n");
            }
            

}