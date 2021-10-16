#include<stdio.h>
int fun(int);
void main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("%d",fun(n));
    

}
int fun(int a)
{
    if (a==1)
    return 1;
    else
    {
        return a+fun(a-1);
    }
    
}