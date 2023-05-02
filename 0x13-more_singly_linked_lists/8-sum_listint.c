#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a linked list
 * @head: pointer to start of a list
 *
 * Return:  sum from (n)data, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = malloc(sizeof(listint_t));
	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
