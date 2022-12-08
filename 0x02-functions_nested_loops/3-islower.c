#include "main.h"

/**
 * _islower - check whether letter is lower case
 * @c: number to check
 *
 * Return: 1 or 0 as the case may be
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
