#include "lists.h"
/**
 * *add_node_end - add a node at the end of node
 * @head: Address of first element of the list
 *@str: pointer to string we want to print
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{

	struct list_s *newlist = NULL;
	struct list_s *temp = NULL;
	int i;

	newlist = (struct list_s *)malloc(sizeof(struct list_s));
	if (newlist == NULL)
		return (NULL);
	newlist->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	newlist->len = i;
	newlist->next = NULL;
	if (*head == NULL)
	{
		*head = newlist;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newlist;
	}
    
	return (newlist);

}
