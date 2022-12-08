#include "main.h"

/**
 * print_times_table - functions
 * @n: value to print to
 *
 * Return: void
 */
void print_times_table(int n)
{
	int j, k, p;

	if (n == 0)
	{
		printf("%d", n);
		printf("\n");
	}
	else if (n > 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
			for (k = 0; k <= n; k++)
			{
				p = j * k;
				if (k == 0)
					printf("%d,", p);
				else if (k < n)
					printf("%4d,", p);
				else
					printf("%4d", p);
			}
			printf("\n");
		}
	}
}
