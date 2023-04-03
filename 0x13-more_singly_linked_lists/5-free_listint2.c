#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		n = (*head)->n;
		free(*head);
		*head = n;
	}
}