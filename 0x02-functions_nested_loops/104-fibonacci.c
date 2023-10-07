#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Fibonacci
 * Return::0
 */
int main(void)
{
	unsigned long int a, b, c, i;
	unsigned long int a_h1, a_h2, b_h1, b_h2, h1, h2;

	a = 0;
	b = 1;

	for (i = 1; i < 93; i++)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	a_h1 = b / 1000000;
	a_h2 = b % 1000000;
	b_h1 = c / 1000000;
	b_h2 = c % 1000000;

	for (i = 93; i < 99; i++)
	{
		h1 = a_h1 + b_h1;
		h2 = a_h2 + b_h2;
		if (h2 > 999999)
		{
			h1 = h1 + 1;
			h2 = h2 % 1000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
			printf(", ");
		a_h1 = b_h1;
		a_h2 = b_h2;
		b_h1 = h1;
		b_h2 = h2;
	}
	putchar('\n');

	return (0);
}
