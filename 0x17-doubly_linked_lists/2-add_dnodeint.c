#include "lists.h"

/**
 * add_dnodeint - add a new noe at the beginning of the list
 * @head: head pointer
 * @n: data
 * Return: the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
	{
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;

	return (temp);
}
