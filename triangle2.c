#include<stdio.h>
void main()
{
float b,h,area,c,a;
printf("Enter the value of b,a,h \n");
scanf("%f%f%f",&b,&a,&h);
area=0.5*b*h;
c=a+b+h;
printf("Area of triangle=%f\n",area);
printf("Perimeter of triangle=%f",c);
}

