#include "lists.h"

/**
 * listsint_len - return the number of elements in a linked lists
 * @h: linked lists of a type listsint_t to traverse
 *
 * Return: number of nodes
 */
size_t listsint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
