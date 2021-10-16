#include<stdio.h>
void area(void);
void main()
{
 area();
}

void area()
{
    int l,b,area;
    printf("enter the length & bredth of rectangle ");
    scanf("%d%d",&l,&b);
    area=(l*b);
    printf("%d",area);

}