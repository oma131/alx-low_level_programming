#include "main.h"

/**
 * print_square - print a square
 * @size: input size
 *
 * Description: it prints a square
 * Return: return 0 as success
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
