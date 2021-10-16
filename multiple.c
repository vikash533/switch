// write a menu driven programm with the following options:
// (1) Additon
// (2) odd_even.
// (3) printing first n natural numbers.
#include<stdio.h>
void main(){
    int choice,a,b,s;
    while (1)
    {
        
    
    printf("\n1.Addition");
    printf("\n2.odd_even");
    printf("\n3.printing N number");
    printf("\n4.exit");
    printf("\nenter the choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter two number");
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("sum=%d",s);
        break;
    case 2:
        printf("enter the no \n");
        scanf("%d",&a);
        if (a%2== 0)
        {
            printf("even no");
        }
        else
        {
            printf("odd no");
        }
        break;
    case 3:
        printf("enter the no");
        scanf("%d\n",&a);
        for ( b = 1; b <= a; b++)
        {
            printf("%d",b);
        }
        break;
    
    default:
        printf("invalid choice");
        break;

    case 4: exit(0);

    }
    }
}