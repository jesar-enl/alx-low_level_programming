#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	unsigned int len;

	if (new_node == NULL)
		return (NULL);
	len = get_length(str);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
