#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Function to add a node at the beggining of the list
 *
 * @head: double pointer head.
 * @n: integer to add to list.
 * Return: Null on fail.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
