#include "main.h"

/**
 * _strlen - function
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	return (count);
}
