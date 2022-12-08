#include "main.h"

/**
 * reverse_array - function
 * @a: integer array to reverse
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	n = n - 1;
	while (i < n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
		n--;
	}
}
