#include "main.h"

/**
 * print_triangle - function
 * @size: number to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int k, c, j, b;

	k = size - 1;
	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			k = k - 1;
			for (b = 0; b < c + 1; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
