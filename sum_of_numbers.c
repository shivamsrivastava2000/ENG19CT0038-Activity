//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

int main()
{
    int n,sum=0,c,value;

    printf("Enter the number of integers you want to add:  ");
    scanf("%d",&n);

    printf("Enter %d integers\n\n",n);
    for(c = 1; c <= n; c++)
    {
        scanf("%d",&value);
        sum += value;
    }

    printf("\n\n\nsum of entered numbers  = %d", sum);
    return 0;
}
