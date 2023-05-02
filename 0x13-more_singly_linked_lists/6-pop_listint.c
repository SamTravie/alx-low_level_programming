#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: pointer to start of a list
 *
 * Return: head's node data(n), or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else

		data = (*head)->n;
	newhead = (*head)->next;
	free(*head);

	*head = newhead;

	return (data);
}
