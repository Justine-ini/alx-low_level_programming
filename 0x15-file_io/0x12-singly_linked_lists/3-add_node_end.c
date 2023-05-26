#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list
 * @head: Address of the first node of a list
 * @str: Address of the string to insert into the new node
 * Return: Address of the new node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *temp_node = NULL;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp_node = *head;
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;

	return (new_node);
}
