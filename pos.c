//Write a c program to chck whether a no is positive, negative or zero using switch case.
#include<stdio.h>
void main(){
    int a,choice;
    printf("enter a number\n");
    scanf("%d",&a);
    printf("enter your choice\n");
    scanf("%d",&choice);
switch (choice)
{
case 1:
        if (a>0)
        {
            printf("no is positive");
        }
        
    break;
case 2:    

default:
    break;
}

}