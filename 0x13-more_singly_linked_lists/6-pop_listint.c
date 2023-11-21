#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
