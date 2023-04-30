#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of pointer.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *first_node;
	listint_t *last_node;

	if (!head)
		return;

	first_node = *head;
	last_node = (*head)->next;
	while (last_node)
	{
		free(first_node);
		first_node = last_node;
		last_node = last_node->next;
	}
	free(first_node);
	*head = NULL;
}
