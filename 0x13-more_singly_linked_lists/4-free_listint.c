#include "lists.h"
#include <stdio.h>
/**
 * free_listint -  frees a listint_t list.
 * @head: listint to free
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
