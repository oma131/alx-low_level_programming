#include "main.h"
/**
 * main - Entry point
 * write a program that prints _putchar, followed by a new line.
 * Return: return 0 as Success
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		putchar(*ch);
		ch++;
	}
	_putchar('\n');

return (0);
}
