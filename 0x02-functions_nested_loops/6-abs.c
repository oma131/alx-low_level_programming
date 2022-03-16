#include "main.h"
/**
 * _abs - compute to the absolute value of an integer
 * @n: int type number
 * Return: return the absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
