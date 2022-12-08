#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
