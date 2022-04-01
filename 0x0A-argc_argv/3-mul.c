#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return 1 if error and 0 as success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
