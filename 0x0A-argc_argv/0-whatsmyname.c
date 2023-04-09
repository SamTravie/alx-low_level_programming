#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: array of strings passed to the program
 * Return: name of the program
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
