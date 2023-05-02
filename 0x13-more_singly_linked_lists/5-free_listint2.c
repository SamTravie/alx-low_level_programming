#include "lists.h"

/**
 * free_listint2 - Frees linked list(listint_t)
 * [The function sets the head to NULL]
 * @head: pointer to location of head pointer to the beginning of list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head);
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}
