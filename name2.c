#include<stdio.h>
void main()
{
float m1,m2,m3,total,avg;
char name[20];
printf("Enter your name \n");
scanf("%s", name);
printf("Enter marks in 3 subjects \n");
scanf("%f %f %f\n", &m1,&m2,&m3);
total=m1+m2+m3;
avg=total/3;
printf("Name is:%s\n",name);
printf("Marks are: %f %f %f\n",m1,m2,m3);
printf("Total is:%f\n",total);
printf("Average is:%f\n",avg);
}
