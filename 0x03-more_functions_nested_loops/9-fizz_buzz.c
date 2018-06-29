#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line;
 * for multiples of 3 print Fizz instead of the number;
 * for multiples of 5 print Buzz;
 * for numbers which are multiples of both 3 and 5 print FizzBuzz.
 * Return: 0.
 */
int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz ");
		else if (number % 3 == 0)
			printf("Fizz ");
		else if (number % 5 == 0)
			printf("Buzz ");
			else
			{
				printf("%i ", number);
			}
		number++;
	}
	putchar('\n');
	return (0);
}
