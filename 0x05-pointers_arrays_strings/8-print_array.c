#include "main.h"

/**
 * print_array - function
 * @a: array
 * @n: number of element
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j = 0;

	for (j = 0; j < n; j++)
	{
		if (j != n - 1)
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
	}
	printf("\n");
}
