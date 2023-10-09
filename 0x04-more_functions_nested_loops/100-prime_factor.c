#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * Description: Largest prime factor
 * Return: 0
 */
int main(void)
{
	long long int i, k, max;

	k = 612852475143;
	max = 0;
	while (k % 2 == 0)
	{
		max = 2;
		k = k / 2;
	}
	for (i = 3; i <= 782849; i = i + 2)
	{
		while ((k % i == 0))
		{
			max = i;
			k = k / i;
		}
	}
	if (k > 2)
		max = k;
	printf("%ld\n", max);
	return (0);
}
