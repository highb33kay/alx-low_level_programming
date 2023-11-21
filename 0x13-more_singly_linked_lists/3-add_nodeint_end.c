#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *current = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* initialize new node */
	new_node->n = n;
	new_node->next = NULL;
	/* if list is empty, new node is head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* else, traverse to last node */
	current = *head;
	while (current->next != NULL)
		current = current->next;
	/* add new node to end of list */
	current->next = new_node;
	return (new_node);
}
