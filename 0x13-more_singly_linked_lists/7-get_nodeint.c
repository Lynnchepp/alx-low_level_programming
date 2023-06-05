#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the first node in the linked list
 * @index:index to return
 * Return: pointer to node, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	return (current ? current : NULL);
}
