#include "lists.h"

/**
 * add_nodeint_end - function pointer
 *
 * @n: int const
 * @head: new
 * Return: new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *new_new = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (new_new->next)
		new_new = new_new->next;

	new_new->next = new;

	return (new);
}
