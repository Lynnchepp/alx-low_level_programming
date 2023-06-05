#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: first node in the linked list
 * Return: sum, 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
