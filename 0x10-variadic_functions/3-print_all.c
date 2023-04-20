#include <stdio.h>
#include <stdarg.h>
/**
* print_all - prints all arguments when specified
* @format: specifies necessary operations
* Return: void(nothing)
*/
void print_all(const char * const format, ...)
{
	int index, flag;
	char *str;
	va_list arg_list;

	va_start(arg_list, format);

	index = 0;
	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(arg_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(arg_list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(arg_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[index + 1] != '\0' && flag == 0)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(arg_list);
}
