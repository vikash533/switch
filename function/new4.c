#include<stdio.h>
int add(int,int);
void main()
{
    int s,x,y;
    printf("enter two no\n");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("sum is =%d\n",s);
}
    int add(int a,int b)
    {
        int c;
        c=a+b;
        return(c);
    }