#include <stdio.h>
#include <stdlib.h>

/**
 * main - Muilltiplys 2 numbera
 *
 * @argc: Argument cunt
 *
 * @argv: Argument vector
 *
 * Return: Success or failuer
 */

int main(int argc, char *argv[])
{
	int i, muilt = 1;

	if (argc >= 3)
	{
		for (i = 1; i < 3; i++)
		{
			muilt *= atoi(argv[i]);
		}
		printf("%d\n", muilt);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
