//WAP to find the sum of two fractions.
#include <stdio.h>
#include <math.h>

struct fraction
{
    int num, denominator;
};
typedef struct fraction Fraction;

Fraction input()
{
    Fraction f;
    printf("Enter numerator: ");
    scanf("%d", &f.num);
    printf("Enter denominator: ");
    scanf("%d", &f.denominator);

    return f;
}

int gcd(int num, int denominator)
{
    int div;
    for (int i = 2; i <= num && i <= denominator; i++)
    {
        if (num % i == 0 && denominator % i == 0)
            div = i;
    }

    return div;
}

Fraction reduce_lowest(Fraction f, int divisor)
{
    f.num /= divisor;
	f.denominator /= divisor;

    return f;
}

Fraction addition(Fraction a, Fraction b)
{
    Fraction sum;
    sum.denominator = a.denominator * b.denominator;
    sum.num = (a.num * b.denominator) + (b.num * a.denominator);

    int divisor = gcd(sum.num, sum.denominator);
    sum = reduce_lowest(sum, divisor);

    return sum;
}

void output(Fraction a, Fraction b, Fraction f)
{
	printf("%d/%d + %d/%d = %d/%d", a.num, a.denominator, b.num, b.denominator, f.num, f.denominator);
}

int main()
{
    Fraction A, B, S;

    A = input();
    B = input();
    S = addition(A, B);
    output(A, B, S);

    return 0;
}
