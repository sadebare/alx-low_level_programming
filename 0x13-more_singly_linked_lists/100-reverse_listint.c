#include "lists.h"
/**
 * reverse_listint - Function that reverses a linked list
 * @head: pointer to the very first node
 *
 * Return: A pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL, *nextnode = NULL;

	if (head)
	{
		while (*head)
		{
			nextnode = *head;
			*head = (*head)->next;
			nextnode->next = prevnode;
			prevnode = nextnode;
		}

		*head = prevnode;
		return (*head);
	}

	return (NULL);
}
