#include <stdio.h>

/**
 * main - Entry point
 * Description: upper and lower
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;
	char e;

	for (d = 'a'; d <= 'z'; d++)
	{
		putchar(d);
	}
	for (e = 'A'; e <= 'Z'; e++)
	{
		putchar(e);
	}
	putchar('\n');

	return (0);
}
