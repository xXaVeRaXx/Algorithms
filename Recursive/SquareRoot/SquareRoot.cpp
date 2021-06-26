// Square Root: numerical analysis algorithms for finding the principal, or non-negative, square root of a real number

#include <iostream>
#include <cstdio>

void squareRoot(float n, float margin, float floor, float ceiling)
{
	float root = (floor + ceiling) / 2;
	float square = root * root;

	printf("%.5f\n", root);

	if (square > n)
	{
		if (square - n <= margin)
		{
			return;
		}
		squareRoot(n, margin, floor, root);
	}
	else
	{
		if (n - square <= margin)
		{
			return;
		}
		squareRoot(n, margin, root, ceiling);
	}
}


int main()
{
	float n, margin;
	scanf("%f %f", &n, &margin);

	squareRoot(n, margin, 0, n);

	return 0;
}