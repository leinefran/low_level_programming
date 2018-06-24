#include <stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of three digits
 * Print only the smallest combination of three digits
 * The three digits must be different and in ascending order
 * Numbers must be separated by ,, followed by a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '7' ; i++)
	{
		for (j = '1' ; j <= '8'; j++)
		{
			for (k = '2' ; k <= '9'; k++)
			{
				if (j > i && k > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
				if (i != '7' && j > i && k > j)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
