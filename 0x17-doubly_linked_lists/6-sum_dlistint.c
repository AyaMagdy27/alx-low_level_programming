#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of linked list
 * @head: pointer
 * Return: int sum of values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
