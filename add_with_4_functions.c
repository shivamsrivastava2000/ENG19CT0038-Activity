//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int input()
{
    int a; 
    printf("Enter a number");
    scanf("%d",&a);
    return a;
}
int add(int a, int b)
{
    int sumup;
    sumup = a+b;
    return sumup;
}
void output(int x, int y, int z)
{
    printf("Sum of %d + %d is %d\n",x,y,z);
}
int main()
{
    int a,b,c;
    a=input();
    b=input();
    c=add(a,b);
    output(a,b,c);
    return 0;
}
