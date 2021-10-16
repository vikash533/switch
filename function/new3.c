#include<stdio.h>
int calsum(int,int,int);
void main()
{
    int a,b,c,sum;
    printf("enter any three number\n");
    scanf("%d%d%d",&a,&b,&c);
    calsum(a,b,c);
    sum=calsum(a,b,c);
    printf("sum=%d\n",sum);
}
int calsum( int x,int y,int z)
{
    int d;
    d=(x+y+z);
    return(d);

}