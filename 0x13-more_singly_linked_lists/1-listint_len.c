#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t lists
 * @h: a linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
    size_t numnds = 0;

    while (h)
    {
        numnds++;
        h = h->next;
    }

    return (numnds);
}
