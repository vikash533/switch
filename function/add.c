#include<stdio.h>
 
  void main(){
      void add(void);
      void iseven(void);
    add();
    iseven();
    add();
}
 void add()
{
    int a,b,c;
    printf("enter two no\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);

}
void iseven()
{
int a;
printf("enter a no");
scanf("%d",&a);
if(a%2==0)
{
    printf("even no");

}
else
{
    printf("odd no");
}

}
 