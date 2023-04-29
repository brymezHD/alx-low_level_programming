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
    size_t numds = 0;

    while (h)
    {
		h = h->next;
        numds++;
        
    }
    return (numds);
}
