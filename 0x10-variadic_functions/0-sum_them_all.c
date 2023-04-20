#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of its parameters
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x;
	int sum_n = 0;

	va_list add;

	va_start(add, n);

	if (n == 0)
		return (0);

	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(add, int);
		sum_n += x;
	}

	va_end(add);

	return (sum_n);
}
