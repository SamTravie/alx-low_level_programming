#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: argument count
 * @argv: array of strings of the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
