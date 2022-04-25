#include "lists.h"
/**
 * print_listint_safe - function that print a listint_t
 * @head: pointer to the very first node
 *
 * Return: number of nodes in size_t or exit 98
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count += 1;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (count);
}
