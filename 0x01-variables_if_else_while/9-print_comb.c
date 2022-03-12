#include <stdio.h>

/**
 * main -Entry Point
 * Description: prints single digit numbers seperated by comma and space
 * Return: return 0 as success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0')
		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}

	putchar('\n');

	return (0);
}
