#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoisee, *haree;

	tortoisee = haree = head;
	while (tortoisee && haree && haree->next)
	{
		tortoisee = tortoisee->next;
		haree = haree->next->next;
		if (tortoisee == haree)
		{
			tortoisee = head;
			break;
		}
	}
	if (!tortoisee || !haree || !haree->next)
		return (NULL);
	while (tortoisee != haree)
	{
		tortoisee = tortoisee->next;
		haree = haree->next;
	}
	return (haree);
}
