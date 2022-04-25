#include "lists.h"
/**
 * listint_len - Function that return the number of element in linkedlist
 * @h: pointer to the struct listint_s
 *
 * Return: The number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
