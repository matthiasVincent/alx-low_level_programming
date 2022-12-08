#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, s;
	char choose[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char pass[58];

	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772-122) > s)
		{
			j = rand() % 62;
			pass[i] = choose[j];
			s = s + choose[j];
			i++;
		}
		while (choose[k])
		{
			if (choose[k] == (2772 - s))
			{
				pass[i] = choose[k];
				s = s + choose[k];
				i++;
				break;
			}
			k++;
		}
	}
	pass[i] = '\0';
	printf("%s", pass);
	return (0);
}
