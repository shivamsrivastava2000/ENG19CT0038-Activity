//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
int input()
{
    float a; 
    printf("Enter the dimension length\n");
    scanf("%f",&a);
    return a;
}

int vol(float h,float d,float b)
{
    float volume;
    volume = ((h*d*b)+(d/b))/3;
    return volume;
}

void output(float h, float d, float b, float v)
{
    printf("Volume of  trompoloid with height %f depth %f and breadth %f is %f\n",h,d,b,v);
}

int main()
{
    float h,d,b,v;
    h=input();
    d=input();
    b=input();
    v=vol(h,d,b);
    output(h,d,b,v);
    return 0;
}

