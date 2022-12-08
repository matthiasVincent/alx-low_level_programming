#include "main.h"

/**
 * _strncat - function
 * @dest: to be appended
 * @src: appending
 * @n: number of characters to be appended
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, l;

	k = l = 0;
	while (*(dest + k))
		k++;
	while (l < n && (*(src + l)))
	{
		*(dest + k) = *(src + l);
		k++;
		l++;
	}
	return (dest);
}
