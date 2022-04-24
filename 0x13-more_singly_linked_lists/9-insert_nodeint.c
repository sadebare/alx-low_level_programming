#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at a given position
 * @head: pointer to the first linked list item
 * @idx: index to insert the new node
 * @n: value of n at each node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	temp = *head;
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (*head);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if(temp)
			temp = temp->next;
		else
			return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
