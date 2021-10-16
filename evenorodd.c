//write a program to check wheter a number is even or odd using switch case.
#include<stdio.h>
void main(){
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    
    switch (a%2)
    {
    case 0:
        printf("even no");
        break;
    
    default:
    printf("odd no");
        break;
    }
}