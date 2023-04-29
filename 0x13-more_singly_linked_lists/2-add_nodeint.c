#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to head
 * @n: data of element
 *
 * Return: pointer to the new node, do NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *nelmt;

    nelmt = malloc(sizeof(listint_t));
    if (!nelmt)
        return (NULL);

    nelmt->n = n;
    nelmnt->next = *head;
    *head = nelmnt;

    return (nelmnt);
}
