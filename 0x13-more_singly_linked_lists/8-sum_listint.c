#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - the sum of all the data in a listint_t list
 * @head: head pointer
 * Return: all data sum.
 **/

int sum_listint(listint_t *head)
{
    int calc = 0;

    while (head != NULL)
    {
        calc += head->n;
        head = head->next;
    }

    return (calc);
}
