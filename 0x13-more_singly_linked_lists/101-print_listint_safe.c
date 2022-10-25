#include "lists.h"

/**
 * free_listp - function that frees a linked list
 * @head: head of the list.
 */
void free_listp(listp_t **head)
{
	listp_t *temp_node;
	listp_t *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while ((temp_node = current_node) != NULL)
		{
			current_node = current_node->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numb_nodes = 0;
	listp_t *head_ptr, *new_node, *added_node;

	head_ptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = head_ptr;
		head_ptr = new_node;

		added_node = head_ptr;

		while (added_node->next != NULL)
		{
			added_node = added_node->next;
			if (head == added_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&head_ptr);
				return (numb_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numb_nodes++;
	}

	free_listp(&head_ptr);
	return (numb_nodes);
}
