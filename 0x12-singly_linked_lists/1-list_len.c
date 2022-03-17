#include "lists.h"

/**
 * list_len - function size_t
 *
 * @h: pointer const list_t
 * Return: i
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for(i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
