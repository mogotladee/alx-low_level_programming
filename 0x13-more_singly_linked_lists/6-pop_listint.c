#include "lists.h"
#include <stdlib.h>

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: #no to pointers#lets be free.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data);
}
