//Combinations: combination of n things taken r at a time without repetition.

#include <iostream>
#include <cstdio>

int factorial(int n)
{
	if (n <= 1)
		return 1;

	return n * factorial(n - 1);
}

int combinations(int n, int r)
{
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
	int n, r;
	while (1)
	{
		scanf("%d %d", &n, &r);
		if (n < 0)
			break;
		int result = combinations(n, r);
		if (result >= 0)
			printf("%d\n", result);
	}

	return 0;
}