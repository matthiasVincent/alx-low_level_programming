#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int st;

	for (st = 0; st < n; st++)
	{
		*(dest + st) = *(src + st);
	}
	return (dest);
}
