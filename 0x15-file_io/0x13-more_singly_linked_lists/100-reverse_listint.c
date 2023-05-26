#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current, *next;

	for (current = *head; current != NULL; current = next)
	{
		next = current->next;
		current->next = prev;
		prev = current;
	}
	*head = prev;
	return (*head);
}
