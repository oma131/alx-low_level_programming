#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of positive numbers followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return 0 as success and 1 if error
 */

int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
