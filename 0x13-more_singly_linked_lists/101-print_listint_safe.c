#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: header pointer
 *
 * Return: no ret.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lnk = 0;
	int p;
	listint_t *nums;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		p = *h - (*h)->next;
		if (p > 0)
		{
			nums = (*h)->next;
			*h = nums;
			lnk++;
		}
		else
		{
			*h = NULL;
			lnk++;
			break;
		}
	}

	*h = NULL;

	return (lnk);
}

