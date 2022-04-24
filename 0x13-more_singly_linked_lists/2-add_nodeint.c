#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning
 *
 * @head: The head of a linked list
 * @n: value assigned to the variable in linkedlist
 *
 * Return: Address of the head or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *newnode;
	newnode = (struct listint_s*)malloc(sizeof(struct listint_s));

	if (head != NULL)
	{
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}

	return (NULL);
}
