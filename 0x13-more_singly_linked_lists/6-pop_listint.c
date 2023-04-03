#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *begin;
	int m;

	if (head == NULL || *head == NULL)
		return (0);
	begin = *head;
	*head = begin->next;
	m = begin->m;
	free(begin);
	return (m);
}
