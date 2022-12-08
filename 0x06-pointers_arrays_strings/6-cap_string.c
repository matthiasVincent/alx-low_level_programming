#include "main.h"

/**
 * cap_string - Capitalize the next letterafter separator
 * @s: given string
 *
 * Return: address of the adjusted string
 */
char *cap_string(char *s)
{
	int i = 0, j;

	char array[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) = *(s + i) - ('a' - 'A');
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (array[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
