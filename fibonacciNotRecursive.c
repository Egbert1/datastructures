#include <stdio.h>

int fibonacciN(int N)
{
	int a = 0;
	int b = 1;
	int c = 0;

	if (N < 2)
		return N;
	else
	{
		for (int i = 2; i <= N; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fibonacciN(n));
	system("pause");
	return 0;
}