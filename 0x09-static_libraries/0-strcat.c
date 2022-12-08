#include "main.h"

/**
 * _strcat - function
 * @dest: to be appended to
 * @src: to be appended
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
		i++;
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
