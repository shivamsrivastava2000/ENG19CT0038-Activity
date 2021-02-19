//WAP to find the sum of n fractions.
#include <stdio.h>

struct fraction
{
	int numerator;
	int denominator;
};
typedef struct fraction Fraction;

Fraction input()
{
	Fraction f;
	printf("Enter numerator: ");
	scanf("%d", &f.numerator);
	printf("Enter denominator: ");
	scanf("%d", &f.denominator);
	
	return f;
}

Fraction addition(Fraction f1, Fraction f2)
{
	Fraction res;
	res.denominator = f1.denominator * f2.denominator;
	res.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);

	return res;
}

int gcd(int numerator, int denominator)
{
	int div;
	for (int i = 1; i <= numerator && i <= denominator; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
			div = i;
	}
	return div;
}

Fraction reduce_lowest(Fraction f, int divisor)
{
    f.numerator /= divisor;
	f.denominator /= divisor;

    return f;
}

Fraction total_sum(Fraction arr[], int size)
{
	Fraction total;
	total.numerator = 0;
	total.denominator = 1;

	for (int i = 0; i < size; i++)
		total = addition(total, arr[i]);
	
	int divisor = gcd(total.numerator, total.denominator);
	total = reduce_lowest(total, divisor);

	return total;
}

Fraction output(Fraction f)
{
	printf("The answer is: %d/%d", f.numerator, f.denominator);
}

int main()
{
	int n, divisor;
	Fraction result;

	printf("Enter the number of fractions: ");
	scanf("%d", &n);

	if (n == 1)
		result = input();
	else
	{
		Fraction fracs[n];

		for (int i = 0; i< n; i++)
			fracs[i] = input();

		result = total_sum(fracs, n);
	}
	output(result);

	return 0;
}
