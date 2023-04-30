#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: head pointer.
 * Return: nodes (Integer).
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t nmb = 0;

	while (node)
	{
		printf("%i\n", node->n);
		nmb++;
		node = node->next;
	}

	return (nmb);
