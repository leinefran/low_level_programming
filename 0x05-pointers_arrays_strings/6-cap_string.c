#include "holberton.h"

/**
 * *cap_string - a function that capitalizes all words of a string.
 *
 * @s: pointer to 1st char of string to be reverse.
 *
 * Return: char.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++) /*runs through the string*/
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[i] = (s[i] - 32);
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			switch (s[i - 1])
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				s[i] = (s[i] - 32);
		}
	}
	return (s);
}
