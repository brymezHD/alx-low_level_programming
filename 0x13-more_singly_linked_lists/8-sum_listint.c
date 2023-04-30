#include "lists.h"

/**
 * sum_listint - the sum of all the data in a listint_t list
 * @head: head pointer
 * Return: all data sum.
 **/

int sum_listint(listint_t *head)
{
	listint_t *haed = head;
    int calc;

	calc = 0;
    while (haed != NULL)
    {
        calc += haed->n;
        haed = haed->next;
    }

    return (calc);
}
