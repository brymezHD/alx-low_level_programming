#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the head.
 * @n: data element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *few;

	few = malloc(sizeof(listint_t));
	if (few == NULL)
		return (NULL);

	few->n = n;
	few->next = *head;
	*head = few;

	return (few);
}
