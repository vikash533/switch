//Write a C program to find maximum and minimum between two number using functions.

#include<stdio.h>
int max(int num1,int num2);//function declaration 
int min(int num1,int num2);// function declaration
void main()
{
    int num1,num2,maximum,minimum;
    //input two no from user.
    printf("enter two no\n");
    scanf("%d%d",&num1,&num2);
    maximum=max(num1,num2);
    minimum=min(num1,num2);
    printf("\nmaximum no is =%d\n",maximum);//function call  max.
    printf("\nminimum no is =%d\n",minimum);//function call min.
}

int max(int num1,int num2)
{
    return((num1>num2)?num1:num2);
}
int min(int num1,int num2)
{
    return((num1>num2)?num1:num2);
}