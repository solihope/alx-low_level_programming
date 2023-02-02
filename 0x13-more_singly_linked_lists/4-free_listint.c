#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - a function that frees a listint_t list.
 * @head: struct
 * Return: free
 */
void free_listint(listint_t *head)
{
	listint_t *killnode;

	while (head != NULL)
	{
		killnode = head;
		head = head->next;
		free(killnode);
	}
}
