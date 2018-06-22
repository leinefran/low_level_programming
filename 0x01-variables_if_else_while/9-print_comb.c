#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9' ; n++)
	{
		putchar(n);
		if (n <= '8'){
	putchar(44);
	putchar(32);
		}
		else
		{
	putchar('\n');
		}
	}
	return (0);
}
