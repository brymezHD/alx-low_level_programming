#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%u] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
        h = h->next;
        count++;
    }

    return (count);
}
