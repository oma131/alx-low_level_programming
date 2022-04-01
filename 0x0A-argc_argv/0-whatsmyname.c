#include <stdio.h>

/**
 * main - Prints name of file folowed by a new line
 * @argc: counts argument
 * @argv: arguments passed
 * Return: return always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
