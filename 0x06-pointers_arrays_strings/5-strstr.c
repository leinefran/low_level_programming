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
	int i, j;

	char *match;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (haystack[i] == needle[j])
		{
			match = &haystack[i];
			i++;
			j++;
			if (haystack[i] != needle[j])
			{
				break;
			}
			else
			{
				return (match);
			}
		}
	}
	return (0);
}
