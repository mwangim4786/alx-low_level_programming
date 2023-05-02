#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Prints no. of elements in a linked list.
 *
 * @h: head of the linked list.
 *
 * Return: No. of elements.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
