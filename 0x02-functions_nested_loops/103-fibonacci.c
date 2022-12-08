#include <stdio.h>

/**
 * main- Main enter
 *
 * Description: Fib
 * Return: 0
 */
int main(void)
{
	long int a, b, c;
	long int sum = 0;

	a = 0;
	b = 1;
	c = a + b;
	while (c <= 4000000)
	{
		if (c % 2 == 0)
			sum = sum + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}
