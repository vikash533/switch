//Write a c program to find diameter,circumference and are of circle using functions.

#include<stdio.h>
float diameter(float);
float circumference(float);
float area_of_circle(float);
float main()
{
    float r,a;
    printf("enter the value of radius of circle");
    scanf("%f",&r);
    diameter(a);
    circumference(a);
    area_of_circle(a);
    printf("%f%f%f",diameter,circumference,area_of_circle);

}

   float diameter(float r)
    {
        return(2*r);

    }
   float area_of_circle(float r)
    {
        return(3.14*r*r);
    }
   float circumference(float r)
    {
        return(2*3.14*r);
    }