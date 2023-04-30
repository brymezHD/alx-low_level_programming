#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: head pointer.
 * @index: head index.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p;
	listint_t *bck;
	listint_t *fwd;

	bck = *head;

	if (index != 0)
	{
		for (p = 0; p < index - 1 && bck != NULL; p++)
		{
			bck = bck->fwd;
		}
	}

	if (bck == NULL || (bck->fwd == NULL && index != 0))
	{
		return (-1);
	}

	fwd = bck->fwd;

	if (index != 0)
	{
		bck->fwd = fwd->fwd;
		free(fwd);
	}
	else
	{
		free(bck);
		*head = fwd;
	}

	return (1);
}
