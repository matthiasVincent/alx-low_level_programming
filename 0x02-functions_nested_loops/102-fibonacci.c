#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: fibonacci series
 * Return: 0
 */
int main(void)
{
	long int a, b, c;
	int i;

	a = 0;
	b = 1;
	c = a + b;
	printf("%ld, ", c);
	for (i = 2; i <= 50; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%ld", c);
		if (i == 50)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
