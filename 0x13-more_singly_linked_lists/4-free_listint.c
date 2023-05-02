#include "lists.h"

/**
 * free_listint - Frees linked list
 * @head: Pointer to start of a list
 *
 * Return: Void(nothing)
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
