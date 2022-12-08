#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: get the sum of multiple of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i;
	int sum = 0;

	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
