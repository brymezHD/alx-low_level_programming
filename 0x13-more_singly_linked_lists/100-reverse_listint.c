#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head index node
 *
 * Return: pointer to the first node of reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bck = NULL;
	listint_t *fwd = NULL;

	while (*head != NULL)
	{
		fwd = (*head)->next;
		(*head)->next = bck;
		bck = *head;
		*head = fwd;
	}

	*head = bck;
	return (*head);
}
