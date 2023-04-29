#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: pointer to 1st element in the list.
 * @n: data in new elmt.
 *
 * Return: address of the new element and NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dew;
	listint_t *tmp;

	(void)tmp;

	dew = malloc(sizeof(listint_t));

	if (dew == NULL)
		return (NULL);

	dew->n = n;
	dew->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = dew;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = dew;
	}

	return (*head);
}
