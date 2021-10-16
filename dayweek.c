#include<stdio.h>
#include<stdlib.h>
void main(){
    int week;
    while (1)
    {
    printf("enter the week no\n");
    scanf("%d",&week);
    switch (week)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break; 
    case 4:
        printf("Thrusday\n");
        break;
    case 5:
        printf("friday\n");
        break;   
    case 6:
        printf("satruday\n");
        break;
    case 7:
        printf("sunday\n");
        break;

    case 8:exit(0);                     
    default:
    printf("invalid case");
        break;
    }
    printf("\n8.exit");
    }
}