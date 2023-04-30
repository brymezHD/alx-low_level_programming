#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head pointer.
 * Return: data if successful.
 **/
int pop_listint(listint_t **head)
{
	int all_data;
	listint_t *head_node = *head;

	if (!head_node)
		return (0);

	all_data = (*head)->n;
	*head = head_node->next;
	free(head_node);
	return (all_data);
}

