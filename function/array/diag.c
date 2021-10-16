//Write a c program to find sum of main diagonal elements of a matrix.

#include<stdio.h>
void main()
{
    int A[3][3],sum=0,i,j;
    printf("enter element in matrix of size %d*%d: \n",3,3);
    for (i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    for ( i = 0; i <= 2; i++)
    
     {
         sum=sum+A[i][i];
     }
    
    printf("\nsum of main diag =%d",sum);
}