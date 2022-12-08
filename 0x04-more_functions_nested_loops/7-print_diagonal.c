#include "main.h"

/**
 * print_diagonal - function
 * @n: number of times
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int c, j, k;

	k = 0;
	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (j = 0; j < k; j++)
				_putchar(' ');
			k = k + 1;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
