//Write a C program to find maximum and minimum element in an array.

#include<stdio.h>
void main()
{
    int arra[10],max,min,i;
        for ( i = 0; i <= 9; i++)
        {
            printf("enter the value\n");
            scanf("%d",&arra[i]);
        }
            max=arra[0];//assume first element is max and minimum.
            min=arra[0];
        for ( i = 0; i <= 9; i++)

        {
            if (arra[i]>arra[0])
            {
                max=arra[i];

            }
            if (arra[i]<arra[0])
            {
                min=arra[i];

            }
            
        }
                printf("maxm no is =%d\n",max);
        
                printf("minimum no is =%d\n",min);
}