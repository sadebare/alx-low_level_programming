#include "lists.h"
/**
 * dlistint_len - function that return the number of nodes
 * @n: pointer to struct in dil
 * 
 * Return: The number of nodes in the list
 * 
 */
size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;

    while (h != NULL)
    {
        h = h->next;
        count++;
    }

    return count;
}
