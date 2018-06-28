#include <stdio.h>

/**
 * main - Entry point
 * prints all possible combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, i, j, k, l;

	for (a = 0 ; a <= 98 ; a++)
	{
		for ( b = a + 1 ; b <= 99 ; b++)
		{
			i = a / 10;
			j = a % 10;
			k = b / 10;
			l = b % 10;
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(l + '0');
			if (a != 98 || b != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
