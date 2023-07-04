#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
