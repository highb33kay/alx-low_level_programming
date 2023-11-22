#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = NULL;
	listint_t *new_node = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	/* if idx == 0, add node at beginning of list */
	if (idx == 0)
		return (add_nodeint_end(head, n));
	/* else, traverse to node at index idx */
	current = *head;
	while (current != NULL)
	{
		if (i == idx)
		{
			/* add new node at index idx */
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = current;
			prev->next = new_node;
			return (new_node);
		}
		prev = current;
		current = current->next;
		i++;
	}
	/* if idx is greater than the number of nodes in list, return NULL */
	if (i < idx)
		return (NULL);
	return (NULL);
}
