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
	listint_t *new_list;

	if (head != NULL)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	return (NULL);
}
