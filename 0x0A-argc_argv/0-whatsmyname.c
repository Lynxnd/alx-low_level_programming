#include <stdlib.h>
#include <stdio.h>

/**
 * main - print name of program
 *
 * @argc: argument count in the cmd line
 *
 * @argv: argument vector, arguments in the cmd line
 *
 * Return: Success
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
