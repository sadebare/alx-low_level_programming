#include "lists.h"
/**
 * print_list - function that prints all the element
 * @h: pointer to list_t
 *
 * Return: number of nodes in list_t
 */
size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		cont++;
		h = h->next;
	}

	return (cont);
} 