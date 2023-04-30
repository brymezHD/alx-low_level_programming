#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the head.
 * @n: data element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *dew;

    dew = malloc(sizeof(listint_t));

    if (!dew)
        return (NULL);

    dew->n = n;
    dew->next = *head;
    *head = dew;

    return (*head);
}
