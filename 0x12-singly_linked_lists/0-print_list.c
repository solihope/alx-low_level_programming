#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - Print all elements of a list_t list
 * @h: Pointer to the first element of the list
 * Return: Number of elements in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
