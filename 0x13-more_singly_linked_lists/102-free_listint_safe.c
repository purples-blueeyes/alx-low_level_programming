#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t elements = 0;
	listint_t *new;

	new = *h;
	while (new)
	{
		new = *h;
		new = new->next;
		free_listint(new);
		elements++;
	}
	*h = NULL;

	return (elements);
}

/**
 * free_list - A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 *
 * Return: Nothing
 */

void free_list(listint_t *head)
{
	listint_t *new;

	if (head)
	{
		new = head;
		new = new->next;
		free(new);
		free_list(new);
	}
	free(head);
}
