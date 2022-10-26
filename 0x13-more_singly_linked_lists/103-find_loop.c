#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	first = second = head;
	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			first = head;
			break;
		}
	}
	if (!first || !second || !second->next)
		return (NULL);
	while (first != second)
	{
		first = first->next;
		second = second->next;
	}
	return (second);
}
