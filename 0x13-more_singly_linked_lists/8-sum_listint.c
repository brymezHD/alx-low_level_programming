#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t list.
 * @head: address head
 * Return: return
 **/
int sum_listint(listint_t *head)
{
	listint_t *scam = head;
	int add = 0;

	while (scam)
	{
		add += scam->n;
		scam = scam->next;
	}

	return (add);
}
