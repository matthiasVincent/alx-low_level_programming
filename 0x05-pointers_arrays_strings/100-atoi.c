#include "main.h"

/**
 * _atoi - function
 * @s: string to convert
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i, j, m, res;

	i = j = res = 0;
	m = 1;
	while (((*(s + i)) < '0' || (*(s + i) > '9')) && (*(s + i) != '\0'))
	{
		if ((*(s + i)) == '-')
			m = m * -1;
		i++;
	}
	j = i;
	while ((*(s + j)) >= '0' && (*(s + j)) <= '9')
	{
		res = res * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (res);
}
