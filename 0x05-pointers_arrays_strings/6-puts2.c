#include "main.h"

/**
 * puts2 - prints one char out of 2 string
 * followed by a new line
 * @str: type string
 */
void puts2(char *str)
{
	int l, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
