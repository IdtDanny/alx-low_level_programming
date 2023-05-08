#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *neu;
	listint_t *samp = *head;

	neu = malloc(sizeof(listint_t));
	if (!neu || !head)
		return (NULL);
	neu->n = n;
	neu->next = NULL;
	if (idx == 0)
	{
		neu->next = *head;
		*head = neu;
		return (neu);
	}
	for (x = 0; samp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			neu->next = samp->next;
			samp->next = neu;
			return (neu);
		}
		else
			samp = samp->next;
	}
	return (NULL);
}
