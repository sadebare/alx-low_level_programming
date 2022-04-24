#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to the first node
 * @index: index to be deleted from
 *
 * Return: 1 if succeeded else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prevnode, *temp;

	if (!(head && *head))
		return (-1);

	temp = *head;
	if (index == 0)
	{
		prevnode = temp;
		*head = temp->next;
		free(prevnode);
		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (temp->next)
				temp = temp-> next;
			else
				return (-1);
		}
		prevnode = temp->next;
		temp->next = prevnode->next;
	}
	free(prevnode);
	return (1);
}
