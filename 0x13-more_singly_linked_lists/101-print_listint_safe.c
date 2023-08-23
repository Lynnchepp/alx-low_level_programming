#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len -counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: pointer to the head of the listint_t to check
 * Return: -0 if list isn't looped
 * otherwise the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (nodes);
		}
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t list safeley
 * @head: pointer to the head of the listint_t list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t index = 0;
	size_t nodes = looped_listint_len(head);

	if (nodes == 0 && head != NULL)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes + index);
}
