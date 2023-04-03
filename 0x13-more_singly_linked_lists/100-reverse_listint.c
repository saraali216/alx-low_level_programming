#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->nxt == NULL)
		return (*head);
	pre = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = pre;
		pre = *head;
		*head = nxt;
	}
	*head = pre;
	return (*head);
}
