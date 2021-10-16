//Write a program to check whether any of the digit in a number appears more than once.

#include<stdio.h>
void main()
{
    int seen[10]={0};
    int n,rem;
    printf("enter the no \n");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        if (seen[rem]==1)
        {
            break;
        }
        seen[rem]=1;
        n=n/10;
    }
    if (n>0)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    
    
}