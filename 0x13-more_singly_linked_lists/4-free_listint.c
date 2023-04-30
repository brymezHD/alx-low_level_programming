#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: add of head of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *mpf;

	while ((mpf = head) != NULL)
	{
		head = head->next;
		free(mpf);
	}
}
