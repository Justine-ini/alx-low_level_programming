#include "lists.h"

/**
 * listint_len - prints number of elements in a list
 *
 * @h: head of the list
 * Return: returns numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
