#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 1 to 100
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz");
			if (c < 100)
				printf(" ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
			if (c < 100)
				printf(" ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
			if (c < 100)
				printf(" ");
		}
		else
		{
			printf("%d", c);
			if (c < 100)
				printf(" ");
		}
	}
	printf("\n");

	return (0);
}
