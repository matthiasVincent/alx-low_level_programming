#include "main.h"

/**
 * print_sign - function
 * @n: number to check
 *
 * Return: 1, 0, and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
	_putchar('\n');
}
