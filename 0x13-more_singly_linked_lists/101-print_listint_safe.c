#include "lists.h"

size_t loop_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * loop_listint_len- counts the numbers of unique nodes
 * in loop listint_t linked list
 * @head: pointer to the head of the listint_t to check
 *
 * Return: if the list is not looped - 0
 * Otherwise - number of unique node in the list
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *i, *j;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	i = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				node++;
				i = i->next;
				j = j->next;
			}
			i = i->next;
			while (i != j)
			{
				node++;
				i = i->next;
			}
			return (node);
		}
		i = i->next;
		j = (j->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe- prints a listint_t linked list
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = loop_listint_len(head);
	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
