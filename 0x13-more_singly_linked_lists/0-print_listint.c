#include "lists.h"

/**
 * print_listint - lets prints all the elements of a list.
 * @h: list to print.
 * 
 * Return: return numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t numnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numnodes++;
		h = h->next;
	}

	return (numnodes);
}
