#include<stdio.h>
void main()
{
int marks[30],avg,sum=0,i;
for ( i = 0; i <= 29; i++)
{   
        printf("enter the marks\n");
        scanf("%d",&marks[i]);
}
for ( i = 0; i <= 29; i++)
{
    sum=sum+marks[i];

}
    avg=sum/30;
    printf("average marks of student = %d",avg);

}