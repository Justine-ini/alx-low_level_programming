#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the beginning of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
