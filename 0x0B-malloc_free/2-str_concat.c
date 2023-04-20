#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - get ends of input and add together for size or join 2 strings
 *
 * @s1: string one
 *
 * @s2: second string
 *
 * Return: pointer to joined 2 string
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int x1, x2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x1 = 0;
	x2 = 0;
	while (s1[x1] != '\0') /* Getting to end of string 1 */
		x1++;
	while (s2[x2] != '\0') /* Getting to end of 2nd string */
		x2++;
	ret = malloc(sizeof(char) * (x1 + x2 + 1)); /* Memory allocation */
	if (ret == NULL)
		return (NULL);
	x1 = 0;
	x2 = 0;
	while (s1[x1] != '\0') /* Getting string 1 */
	{
		ret[x1] = s1[x1];
		x1++;
	}
	while (s2[x2] != '\0') /* Getting 2nd string */
	{
		ret[x1] = s2[x2];
		x1++;
		x2++;
	}
	ret[x1] = '\0';
	return (ret);
}
