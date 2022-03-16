#include "main.h"

/**
 * _isalpha - check the code
 * @c: type int character
 *
 * Return: return 0 as success.
 */
int _isalpha(int c)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
