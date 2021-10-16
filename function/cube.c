//Write a c program to fund cube of any number using function.
#include<stdio.h>
int cube(int);
void main()
{
    int a;
    printf("enter a no ");
    scanf("%d",&a);
    cube(a);
    printf("cube of a no is=%d",cube(a));

}
    int cube(int y)
    {
        
        return(y*y*y);
    }