#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Fibonacci
 * Return::0
 */
int main(void)
{
	unsigned int a, b, c, i;

	a = 0;
	b = 1;
	c = a + b;
	printf("%u, ", c);
	for (i = 2; i <= 98; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%u", c);
		if (i == 98)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
