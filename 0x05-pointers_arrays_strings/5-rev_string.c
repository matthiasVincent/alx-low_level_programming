#include "main.h"
#include <string.h>

/**
 * rev_string - function
 * @s: needed string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char *beg, *end, temp;

	beg = s;
	end = s;
	len = strlen(s);
	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *beg;
		*beg = temp;
		beg++;
		end--;
	}
}
