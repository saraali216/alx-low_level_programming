#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *h;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nw->next = h;

	if (h != NULL)
		h->prev = nw;

	*head = nw;

	return (nw);
}
