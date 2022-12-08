#include "main.h"
#include <string.h>

/**
 * puts_half - function
 * @str: needed value
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, i, half;

	len = strlen(str);
	if (len % 2 != 0)
	{
		half = (len + 1) / 2;
		for (i = half; i < len; i++)
			printf("%c", str[i]);
	}
	else
	{
		half = len / 2;
		for (i = half; i < len; i++)
			printf("%c", str[i]);
	}
	printf("\n");
}
