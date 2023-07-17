#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    unsigned int len1 = 0, len2 = 0, concat_len = 0;
    char *concat;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    concat_len = len1 + n;

    concat = malloc(sizeof(char) * (concat_len + 1));
    if (concat == NULL)
        return NULL;

    strncpy(concat, s1, len1);
    strncpy(concat + len1, s2, n);
    concat[concat_len] = '\0';

    return concat;
}
