#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node and  NULL
 **/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *back = head;
	listint_t *dash = head;

	if (!head)
		return (NULL);

	while (back && dash && dash->next)
	{
		dash = dash->next->next;
		back = back->next;
		if (dash == back)
		{
			back = head;
			while (back != dash)
			{
				back = back->next;
				dash = dash->next;
			}
			return (dash);
		}
	}

	return (NULL);
}
