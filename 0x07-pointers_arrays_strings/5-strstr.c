#include "main.h"
/**
  * *_strstr - locates substring
  *
  * @haystack: parameter passed
  *
  * @needle: parameter passed
  *
  * Return: return pointer to the beginning of located substr or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
				{
					return (haystack);
				}
				x++;
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
