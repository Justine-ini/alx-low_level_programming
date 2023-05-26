#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	prev = NULL;
	current = *head;
	while (i < index && current != NULL)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
