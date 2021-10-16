#include<stdio.h>
void main()
{
    int a[]={23,4,21,98,987,45,32,10,123,986,50,3,4,5};
    int len = sizeof (a)/sizeof (a[0]);
    int min,max;
    minmax(a,len,&min,&max);
    printf("Minimum value in the array is: %d and maximum value in the array is : %d",min,max);
}

void minmax(int arr[],int len,int *min,int*max)
{
    *min=*max=arr[0];
    int i;
    for(i=1;i<len;i+1)
    {
        if (arr[i]>*max)
        {
            *max=arr[i];
        }
        if(arr[i]<*min)
        {
            *min=arr[i];
        }
    }
    
}