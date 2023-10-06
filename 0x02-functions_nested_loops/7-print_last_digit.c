#include "main.h"

/**
 * print_last_digit - output last digit in a number
 * @n: number to be returned
 *
 * Return: n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10;
		n = -n;
	}
	else
	{
		n = n % 10;
	}

	_putchar('0' + n);

	return (n);
}
