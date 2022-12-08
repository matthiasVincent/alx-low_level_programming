#include "main.h"

/**
 * _isalpha - check whether parameter is an alphabet
 * @c: number to check
 * Return:  1 if c is alpha and  0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
