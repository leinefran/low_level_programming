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
	int i, j, found = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
				found = 0;
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
