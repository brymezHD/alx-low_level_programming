#include "lists.h"

/**
 * sum_listint - the sum of all the data in a listint_t list
 * @head: head pointer
 *
 * Return: all data sum.
 */
int sum_listint(listint_t *head)
{
    int calc = 0;
    listint_t *haed = head;

    while (haed)
    {
        calc += haed->n;
        haed = haed->next;
    }

    return (calc);
}
