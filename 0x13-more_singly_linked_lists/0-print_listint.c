#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: link list to print.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb++;
	}

	return (numb);
}
