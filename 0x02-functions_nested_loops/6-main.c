#include "main.h"
#include <stdio.h>

/**
 * _abs - compute the absolute value of an integer
 * @n: int type number
 * Return: return 0 as success
 */
int _abs(int n)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
return (0);
}
