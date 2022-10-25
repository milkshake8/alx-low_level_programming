#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node;
	listint_t *current_node;

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
