// write a program that reads 5*5 array of integer and then print the row sum and column sum.
#include<stdio.h>
void main()
{
    int a[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int i,j,sum=0;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            sum=sum+a[i][j];
        }
            printf("%d\n",sum);
            sum=0;
            }
            //column sum
            printf("\n column total:");
            for ( j = 0; i < 5; j++)
            {
                for ( i = 0; i < 5; i++)
                {
                    sum=sum+a[i][j];

                }
                printf("%d\n",sum);
                sum=0;
            }
            
        
    }
    
}