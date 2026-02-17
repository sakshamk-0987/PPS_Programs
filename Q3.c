#include<stdio.h>
int main()
{
    printf("input the radius of the circle \n");
    float r;    
    scanf("%f",&r);
    float area=3.14*r*r;
    printf("Area of the circle is %f",area);
    float circumference=2*3.14*r;
    printf("\nCircumference of the circle is %f",circumference);
}