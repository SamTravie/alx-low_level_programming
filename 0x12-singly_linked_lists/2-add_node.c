#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* _strlen - function that returns the length of a string.
* @s : character
*
* Return: value i
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to list_t list
 * @str: new string to add in the node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
