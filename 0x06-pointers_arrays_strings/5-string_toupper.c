#include "main.h"

/**
 * string_toupper - function
 * @s: the strings to convert
 *
 * Return: address to converted string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
			*(s + i) = *(s + i) - ('a' - 'A');
		i++;
	}
	return (s);
}
