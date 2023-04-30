#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head pointer.
 * @idx: index of the add list position
 * @n: integer element.
 * Return: the address of the new node, or NULL if failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nwnd;
	listint_t *p;

	p = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && p != NULL; i++)
		{
			p = p->next;
		}
	}

	if (p == NULL && idx != 0)
		return (NULL);

	nwnd = malloc(sizeof(listint_t));
	if (nwnd == NULL)
		return (NULL);

	nwnd->n = n;

	if (idx == 0)
	{
		nwnd->next = *head;
		*head = nwnd;
	}
	else
	{
		nwnd->next = p->next;
		p->next = nwnd;
	}

	return (nwnd);
}
