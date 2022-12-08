#include "lists.h"

/**
 * insert_dnodeint_at_index - new node at a certain index/ position
 * @h: header pointer
 * @idx: position
 * @n: data
 * Return: new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *temp, *temp2;
        unsigned int i = 0;

        if (*h == NULL)
        {
                return (NULL);
        }
        temp2 = malloc(sizeof(dlistint_t));
        if (temp2 == NULL)
        {
                return (NULL);
        }
        temp2->n = n;
        temp2->next = NULL;
        temp2->prev = NULL;
        temp = *h;
        while (temp != NULL)
        {
                if (i == idx)
                {
                        (temp->prev)->next = temp2;
                        temp2->prev = temp->prev;
                        temp->prev = temp2;
                        temp2->next = temp;
                        return (temp2);
                }
                temp = temp->next;
                i++;
        }
        free(temp2);
        return (NULL);
}
