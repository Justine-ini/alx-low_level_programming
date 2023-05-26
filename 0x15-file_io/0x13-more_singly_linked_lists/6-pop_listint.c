#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: head of a list.
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *temp;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	h_node = current->n;

	temp = current->next;

	free(current);

	*head = temp;

	return (h_node);
}
