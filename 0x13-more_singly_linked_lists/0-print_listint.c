#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to a list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes;

	if (h == NULL)
		return (0);
	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}

