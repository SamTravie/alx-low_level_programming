#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * [The function sets the head to NULL]
 * @h: address of pointer to first node
 *
 * Return: address of head,
 * the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *head, *temp;
	long diff;

	if (!h)
		return (0);

	head = *h;
	*h = NULL;
	while (head)
	{
		c++;
		diff = head->next - head;
		temp = head;
		free(temp);
		if (diff >= 0)
			break;
		head = head->next;
	}

	return (c);
}
