#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;
	char y[11] = "(nil)";

	tmp = h;
	for (i = 0; tmp; i++)
	{
		if (tmp->str == NULL)
		{
			printf("[%u] %s\n", tmp->len, y);
			tmp = tmp->next;
		}
		else
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
		}
	}
	return (i);
}
