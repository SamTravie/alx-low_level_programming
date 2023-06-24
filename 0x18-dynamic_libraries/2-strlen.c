#include "main.h"
/**
 *  _strlen - Prints length
 * description: _strlen
 *@s: pointer to s
 * Return: a
 */
int _strlen(char *s)
{
	int a;
	a = 0;

	while (s[a] != 0)
	{
		a++;
	}

	return (a);
}
