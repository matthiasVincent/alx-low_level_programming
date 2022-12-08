#include "main.h"

/**
 * times_table - function
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j == 0)
				printf("%d,", k);
			else if (j < 9)
				printf("%3d,", k);
			else
				printf("%3d", k);
		}
		printf("\n");
	}
}
