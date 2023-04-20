#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;

	unsigned int i;
	char *x;

	va_start(str, n);

	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(str, char *);
		if (x == NULL)
			printf("nil");
		else
			printf("%s", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
