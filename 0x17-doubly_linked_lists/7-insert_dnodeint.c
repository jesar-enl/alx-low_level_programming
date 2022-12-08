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

	/* if the head pointer is NULL, return NULL*/
	if (*h == NULL)
	{
		return (NULL);
	}
	/* Allocate memory to the new pointer */
	temp2 = malloc(sizeof(dlistint_t));
	if (temp2 == NULL)
	{
		return (NULL);
	}
	temp2->n = n;
	temp2->next = NULL;
	temp2->prev = NULL;
	temp = *h;

	/* If the previous pointer is NULL */
	while (temp != NULL)
	{
		/* If the index is equal to the position specified */
		if (i == idx)
		{
			(temp->prev)->next = temp2;
			temp2->prev = temp->prev;
			temp->prev = temp;
			temp2->next = temp;
			return (temp2);
		}
		temp = temp->next;
		i++;
	}
	/* Free up memory */
	free(temp2);

	return (NULL);
}
