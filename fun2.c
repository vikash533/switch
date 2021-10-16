//write program to takes nothing returns something.
#include<stdio.h>
int area(void);
void main()
{
    int c;

    c=area();
    printf("area of rect=%d",c);

}
 int area()
{
    int l,b,area;
    printf("enter the value of length and breath of rec");
    scanf("%d%d",&l,&b);
    area=(l*b);
    return(area);
}