#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: arguments counter
 * @argv: arguments pointer to array
 *
 * Return: always 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
