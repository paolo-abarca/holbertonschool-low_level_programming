#include "lists.h"

/**
 * free_list - function void
 *
 * @head: pointer list_t
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
