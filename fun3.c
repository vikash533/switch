//Takes something return something.
#include<stdio.h>
int area(int,int);
void main()
{
    int l,b,c;
    printf("enter the value of length and breath of rec\n");
    scanf("%d%d",&l,&b);
    c= area(l,b);
    printf("area of rec=%d\n",c);

}
int area(int x,int y)
{
    int area;
area=(x*y);
return(area);

}