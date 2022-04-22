#include "lists.h"
/**
 * print_list - function that prints all the element
 * @h: pointer to list_t
 *
 * Return: number of nodes in list_t
 */
size_t print_list(const list_t *h)
{
    list_t *temp;
    int i = 0;
    while(h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[%d] %s\n", 0, "(nil)");
            while(h->next != NULL)
            {
                temp = h->next;
                i++;
            }
        }
        else {
            printf("[%d] %s\n", h->len, h->str);
             while(h->next != NULL)
            {
                temp = h->next;
                i++;
            }
        }
    }
    return (i);
}

