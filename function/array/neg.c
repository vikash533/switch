//Write a C program to print all negative elements in an array.
#include<stdio.h>
void main()
{
    int a[30],i;
    for ( i = 0; i <= 29; i++)
    {
        printf("enter the no\n");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <= 29; i++)
    {
        if (a[i]<0)
        {
            printf("%d",a[i]);
        }
    
        
    }
    
    
}