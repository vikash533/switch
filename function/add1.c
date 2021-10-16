//takes something return nothing.
#include<stdio.h>
void main(){
    int x,y;
    void add (int,int);
    printf("enter two no");
    scanf("%d%d",&x,&y);
    add(x,y);

}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("dum is =%d",c);

}