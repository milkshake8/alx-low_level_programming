#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the linked list.
 * @str: string which stores the list.
 * Return: address of head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp;
	size_t nchar;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	n->len = nchar;
	n->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = n;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n;
	}

	return (*head);
}
