#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len- print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
