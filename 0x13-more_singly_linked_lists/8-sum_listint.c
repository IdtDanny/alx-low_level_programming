#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *samp = head;

	while (samp)
	{
		res += samp->n;
		samp = samp->next;
	}
	return (res);
}
