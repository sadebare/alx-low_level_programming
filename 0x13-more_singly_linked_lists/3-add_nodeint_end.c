#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: pointer to the first node
 * @n: value to be inserted at n variable in the node
 *
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *newnode, *temp;

	newnode = (struct listint_s *)malloc(sizeof(struct listint_s));

	if (head != NULL)
	{
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		newnode->next = NULL;

		if (*head == NULL)
		{
			*head = newnode;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;

			temp->next = newnode;
			return (temp);
		}
	}

	return (NULL);
}

