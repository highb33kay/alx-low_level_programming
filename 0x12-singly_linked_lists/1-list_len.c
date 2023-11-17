#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list to find the length of
 *
 * Return: the number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	const struct list_s *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
