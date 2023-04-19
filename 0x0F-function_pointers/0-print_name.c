#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string(name)
 * @f: pointer to function
 *
 * Return: nothing(void)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
