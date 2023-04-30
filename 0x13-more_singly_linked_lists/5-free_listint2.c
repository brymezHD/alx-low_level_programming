#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head opointer.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *mvp;
	listint_t *crnt;

	if (head != NULL)
	{
		crnt = *head;
		while ((temp = crnt) != NULL)
		{
			crnt = crnt->next;
			free(mvp);
		}
		*head = NULL;
	}
}
