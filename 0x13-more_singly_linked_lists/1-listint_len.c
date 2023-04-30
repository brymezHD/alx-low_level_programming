#include "lists.h"

/**
 * listint_len - returns the number of elements 
 * in a linked listint lists
 * @h: a linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)	
{
	const listint_t *nod = h;
	size_t numb = 0;

	while (nod)
	{
		numb++;
		nod = nod->next;
	}

	return (numb);
}
