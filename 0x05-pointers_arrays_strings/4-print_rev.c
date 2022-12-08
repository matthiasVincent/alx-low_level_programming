#include "main.h"
#include <string.h>

/**
 * print_rev - function
 * @s: needed string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	l = strlen(s);
	l = l - 1;
	while (l >= 0)
	{
		_putchar(*(s + l));
		l--;
	}
	_putchar('\n');
}
