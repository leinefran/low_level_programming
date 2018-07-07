#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: pointer to 1st char of string to be reverse.
 *
 * Return: char.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++) /*runs through the string*/
	{
		if (s[i] >= 97 && s[i] <= 122) /*check for lowecase*/
			s[i] = (s[i]- 32);  /*prints uppercase*/
	}
	return (s);
}
