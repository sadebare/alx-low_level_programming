#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: pointer to the first list in linked list
 *
 * Return: 0 if linkedlist is empty else n;
 */
int pop_listint(listint_t **head)
{
	listint_t *second;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	second = (*head)->next;
	(*head)->next = 0;
	free(*head);
	*head = second;
	return (data);
}
