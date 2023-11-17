#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees the block of memory
 * @head: head of node to be freed
 *
 * Return:
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		list_t *next = ptr->next;

		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
