#include<stdio.h>
void main()
{
int m,p,c,e,s,sum;
float a;
printf("Enter the value of m,p,c,e,s\n");
scanf("%d%d%d%d%d",&m,&p,&c,&e,&s);
sum=m+p+c+e+s;
printf("sum=%d",sum);
a=(sum)/5;
printf("a=%f",a);
}
