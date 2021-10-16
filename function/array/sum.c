//write a programm to sum of no with help of array.

#include<stdio.h>
void main()

{
    int a[10],i,sum=0;
    printf("enter 10 num \n");
    for (i = 0; i <= 9; i++) 
    {
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i <= 9; i++)
    {
        sum= sum+a[i];
        printf("%d\n",sum);
    }
    
    
}
 