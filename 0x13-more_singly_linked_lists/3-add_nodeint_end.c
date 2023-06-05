#include "lists.h"
#include <stdio.h>
/*
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @n: data to insert in the new element
 * @head: pointer to a pointer to the first element in the list
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}
	return (new_node);
}
