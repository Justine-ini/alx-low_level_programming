#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: head of a list.
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	listint_t *temp;
	int h_node;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	h_node = temp->n;
	current = temp->next;
	free(temp);
	*head = current;
	return (h_node);
}
