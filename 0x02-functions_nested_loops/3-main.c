#include "main.h"

/**
 * _islower - check the code.
 * @c: first parameter
 *
 * Description: prints in lowercase
 * Return: return 0 as success.
 */
int _islower(int c)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
