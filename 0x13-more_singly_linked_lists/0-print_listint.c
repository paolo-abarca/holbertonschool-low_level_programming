#include "lists.h"

/**
 * print_listint - function size_T
 *
 * @h: pointer const
 * Return: i
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
