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
	size_t ment = 0;
	int pen;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		pen = *h - (*h)->next;
		if (p > 0)
		{
			temp = (*h)->next;
			*h = temp;
			ment++;
		}
		else
		{
			*h = NULL;
			ment++;
			break;
		}
	}

	*h = NULL;

	return (ment);
}

