#include "main.h"

/**
 * _strncpy - function
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of characters to copy
 *
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
