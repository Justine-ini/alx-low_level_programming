#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: head of a list.
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
