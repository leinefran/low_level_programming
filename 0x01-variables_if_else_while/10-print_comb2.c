#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0' ; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != j || j != '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
