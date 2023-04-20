#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x;

	va_list print_n;

	va_start(print_n, n);

	if (separator == NULL)
		separator = "";

	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(print_n, int);
		printf("%d", x);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(print_n);
}
