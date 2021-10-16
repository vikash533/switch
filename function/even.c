//write a c program to check whether a number is even or odd using functions.

#include<stdio.h>
int fun(int a);
void main()
{
    int a,b;
    //user provide a no to check whether even or odd.
    printf("enter the no\n");
    scanf("%d",&a);
    b=fun(a);    
    printf("%d\n",b);

}
int fun(int a)
{
    if (a%2==0)
    {
        printf("even no\n");
    }
    else
    {
        printf("odd no\n");
    }
    return(a%2==0);       
}