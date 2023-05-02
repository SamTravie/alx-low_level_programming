#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list(listint_t)
 * @head: pointer to the head pointer of a linked list
 *
 * Return: a pointer to the first node of the returned list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	curr = *head;
	*head = curr->next;
	nxt = (*head)->next;

	curr->next = NULL;

	while (nxt != NULL)
	{
		(*head)->next = curr;
		curr = *head;
		*head = nxt;
		nxt = nxt->next;
	}
	(*head)->next = curr;

	return (*head);
}
