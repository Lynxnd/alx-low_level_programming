#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: exit success, exit failuer
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
