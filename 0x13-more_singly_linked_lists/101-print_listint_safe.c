#include "lists.h"

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: head pointer
 * Return: no rtn.
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t rnum = 0;
	const listint_t *nnde = head;

	if (!head)
		exit(98);

	while (nnde)
	{
		printf("[%p] %i\n", (void *)nnde, nnde->n);
		nnde = nnde->next;
		rnum++;
	}
	return (rnum);
}
