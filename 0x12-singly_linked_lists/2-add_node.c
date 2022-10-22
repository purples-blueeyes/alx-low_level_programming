#include "lists.h"

/**
 * add_node - adds a new node at the beginning of  list_t list
 * @head: head of linked list
 * @str: string to be used as data for node
 *
 * Return: Number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t elements;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (elements = 0; str[elements]; elements++)
		;

	new->len = elements;
	new->next = *head;
	*head = new;

	return (*head);
}
