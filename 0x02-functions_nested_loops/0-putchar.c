#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: return 0 as Success
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');

return (0);
}
