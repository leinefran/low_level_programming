#include "holberton.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: primary string.
 * @needle: pointer to the first address of the substring.
 *
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, length = 0, found = 0;

	while (needle[length] != '\0')
		length++;
	if (length - 1 == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				found = 0;
				break;
			}
			else
			{
				found = 1;
			}
		}
		if (found == 1)
			return (haystack + i);
	}
	return (0);
}
