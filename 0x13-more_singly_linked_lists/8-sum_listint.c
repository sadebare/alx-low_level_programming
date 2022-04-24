#include "lists.h"
/**
 * sum_listint - Function that sum all the data (n)
 * @head: pointer to the first list in the linked list
 *
 * Return: sum of n or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
