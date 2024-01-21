#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments received
 *
 * @argc: argument count
 *
 * @argv: Argument vector in the cmd line
 *
 * Return: Exit success or failure
 */

int main(int argc, char *argv[])
{
	int i;
	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
