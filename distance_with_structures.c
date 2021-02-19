//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct coordinates
{
    float x;
    float y;
};
typedef struct coordinates point;
point input()
{
    point p;
    printf("Enter abcissa ");
    scanf("%f",&p.x);
    printf("Enter ordinate ");
    scanf("%f",&p.y);
    return p;
}
float distance(point a,point b)
{
    float dist;
    dist= sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
    return dist;
}
void output(point a, point b, float dist)
{
    printf("The distance between %f,%f and %f,%f is %f",a.x,a.y,b.x,b.y,dist);
}
int main(void)
{
    float dist;
    point a,b;
    a=input();
    b=input();
    dist=distance(a,b);
    output(a,b,dist);
    return 0;
}
