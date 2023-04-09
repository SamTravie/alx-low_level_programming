#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: array of strings of arguments
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (argc > 1)
		{
			for (i = 1 ; i < argc ; i++)
			{
				mult = mult * atoi(argv[i]);
			}
			printf("%d\n", mult);
		}
		return (0);
	}

}
