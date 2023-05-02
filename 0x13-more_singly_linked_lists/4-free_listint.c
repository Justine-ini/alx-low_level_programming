#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list
 * Return: no void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}


