#include "lists.h"
/**
 * list_len - function that return nember of element in list_t
 * @h: pointer to the struct
 *
 * Return: number of element in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}


	return (count);
}
