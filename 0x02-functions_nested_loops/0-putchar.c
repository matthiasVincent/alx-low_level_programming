#include "main.h"

/**
 * main - Entry point
 * Description: print to screen
 * Return: 0
 */
int main(void)
{
	char str[20] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
