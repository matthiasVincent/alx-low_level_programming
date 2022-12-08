#include "main.h"

/**
 * print_to_98 - function
 * @n: number to be checked
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
