#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to first element in the linked list
 * Return: head nodes data, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (num);
}
