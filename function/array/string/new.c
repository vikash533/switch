#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int l;
    printf("enter your name\n");
    gets(a);
    l=strlen (a);
    printf("lengthof %s is %d",a,l);
}