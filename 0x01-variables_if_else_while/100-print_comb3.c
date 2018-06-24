#include <stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of two digits
 * the 2 digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * print only the smallest combination of two digits in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8' ; i++)
	{
		for (j = '1' ; j <= '9'; j++)
		{
			if (j > i)
			{
			putchar(i);
			putchar(j);
			}
			if (j > i && j != i && i != '8')
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
