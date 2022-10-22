#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *not_p;

	not_p = head;

	while (head)
	{
		not_p = head;
		head = head->next;
		free(not_p->str);
		free(not_p);
	}
	free(head);
}
