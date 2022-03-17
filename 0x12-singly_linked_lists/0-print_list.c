#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: pointer const list_t
 * Return: size_t i
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}
