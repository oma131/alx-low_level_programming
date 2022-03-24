#include "main.h"

/**
 * *string_toupper - change leters from lowercase to uppercase
 * @s: string to modify
 *
 * Return: return resulting string as success
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
