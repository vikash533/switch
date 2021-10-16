#include<stdio.h>
void main()
{
    char name[]="vikash kumar";
    int i;
    // int i=0;
    // while (name[i]!='\0')
    // {
    //     printf("%c",name[i]);

    // i++;
    // }
    for ( i = 0; name[i]!='\0'; i++)
    {
        printf("%c ",name[i]);
    }
    
}