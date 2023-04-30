#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: head pointer.
 * Return: nodes (Integer).
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *nt;
	unsigned int nmb = 0;

	nt = h;
	while (nt)
	{
		printf("%d\n", nt->n);
		nmb++;
		nt = nt->next;
	}
	return (nmb);
}
