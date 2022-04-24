#include "lists.h"
/**
 * print_listint - function that prints all elements
 * @h: pointer to a structure listint_s
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
			printf("%d\n", h->n);
			i++;
			h = h->next;
	}
	
	return (i);
}
