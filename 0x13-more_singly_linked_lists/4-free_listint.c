#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while ((tmp_node = head) != NULL)
	{
		head = head->next;
		free(tmp_node);
	}
}
