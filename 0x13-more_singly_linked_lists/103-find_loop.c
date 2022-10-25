#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a list
 * @head: A pointer to listint_t structure
 *
 * Return: The address of the node where the loop start, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *push = head, *pull = head;

	if (!head)
		return (NULL);

	while (push && pull && pull->next)
	{
		pull = pull->next->next;
		push = push->next;

		if (pull == push)
		{
			push = head;
			while (push != pull)
			{
				push = push->next;
				pull = pull->next;
			}
			return (pull);
		}
	}
	return (NULL);
}
