#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head opointer.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *wow;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = wow) != NULL)
		{
			wow = wow->next;
			free(temp);
		}
		*head = NULL;
	}
}
