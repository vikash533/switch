#include<stdio.h>
#include<string.h>
void main()
{
    char a[]="Banglore";
    int len1;
    char len2;
    len1=strlen(a);
    len2=strlen("vikash kumar");
    printf("\nstring=%s length=%d",a,len1);
    printf("\nstring=%s length=%d","vikash kumar",len2);
}