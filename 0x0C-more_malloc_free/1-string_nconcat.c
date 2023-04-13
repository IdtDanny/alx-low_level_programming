#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string to append to.
 *
 * @s2: string to concatenate from.
 *
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string otherwise NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, l1, l2;

	x = 0;
	y = 0;
	l1 = 0;
	l2 = 0;
	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		str = malloc(sizeof(char) * (l1 + n + 1));
	else
		str = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!str)
		return (NULL);
	while (x < l1)
	{
		str[x] = s1[x];
		x++;
	}
	while (n < l2 && x < (l1 + n))
		str[x++] = s2[y++];
	while (n >= l2 && x < (l1 + l2))
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}

