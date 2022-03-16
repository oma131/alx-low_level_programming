#include "main.h"

/**
 * print_sign - check code.
 * @n: type int, can be negative or positive
 * Description: depending on number - print +, 0, or -
 *
 * Return: return 0 as success.
 */
int print_sign(int n)
{
	int r;

	 r = print_sign(98);
	 _putchar(',');
	 _putchar(' ');
	 _putchar(r + '0');
	 _putchar('\n');
	 r = print_sign(0);
	 _putchar(',');
	 _putchar(' ');
	 _putchar(r + '0');
	 _putchar('\n');
	 r = print_sign(0xff);
	 _putchar(',');
	 _putchar(' ');
	 _putchar(r + '0');
	 _putchar('\n');
	 r = print_sign(-1);
	 _putchar(',');
	 _putchar(' ');
	 _putchar(r + '0');
	 _putchar('\n');
return (0);
}
