#include "lists.h"

/**
 * add_node_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 *
 * Return: pointer to new element of list, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t elements;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (elements = 0; str[elements]; elements++)
		;
	new->len = elements;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
