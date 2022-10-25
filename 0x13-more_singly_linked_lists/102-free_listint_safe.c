#include "lists.h"

/**
 * free_listp2 - function that frees a linked list
 * @head: head of the list.
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp_node;
	listp_t *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while ((tmp_node = current_node) != NULL)
		{
			current_node = current_node->next;
			free(tmp_node);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function that frees a linked list.
 * @h: head of the list.
 *
 * Return: size of the list that we freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t numb_nodes = 0;
	listp_t *head_ptr, *new_node, *added_node;
	listint_t *current_node;

	head_ptr = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = head_ptr;
		head_ptr = new_node;

		added_node = head_ptr;

		while (added_node->next != NULL)
		{
			added_node = added_node->next;
			if (*h == added_node->p)
			{
				*h = NULL;
				free_listp2(&head_ptr);
				return (numb_nodes);
			}
		}

		current_node = *h;
		*h = (*h)->next;
		free(current_node);
		numb_nodes++;
	}

	*h = NULL;
	free_listp2(&head_ptr);
	return (numb_nodes);
}
