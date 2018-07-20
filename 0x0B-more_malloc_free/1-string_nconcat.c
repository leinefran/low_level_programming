#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * If NULL is passed, treat it as an empty string
 *
 * @s1: a pointer to the string to be modified.
 * @s2: a pointer to the string to be appended at the end of s1.
 * @n: number of elements.
 *
 * Return: pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len;
	unsigned int i, j, len;
	char *ls;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0 ; s1[s1_len] != '\0' ; s1_len++)
		;
	for (s2_len = 0 ; s2_len < n ; s2_len++)
		;

	len =  s1_len + s2_len + 1;


	ls = malloc(sizeof(char) * len);

	if (ls == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		ls[i] = s1[i];
	for (j = 0 ; j < n ; j++)
		ls[i + j] = s2[j];
	ls[i + j] = '\0';

	return (ls);
}
