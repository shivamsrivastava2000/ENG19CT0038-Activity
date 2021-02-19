#include<stdio.h>
int main()
{
float h,d,b,vol;
printf("enter values of h,d,b respectively");
scanf("%f%f%f",&h,&d,&b);
vol=((h*d*b)+(d/b))/3;
printf("the volume of tromboloid is %f",vol);
return 0;
}
