#include <stdio.h>

 /**
  * main - Entry point
  * prints the numbber from 1 to 100, but for multiples of three
  * print Fizz instead of the number and for multiples of five print Buzz.
  * for numbers which are multiples of both three and five print FizzBuzz.
  * Return: Always 0 (success)
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz");
		else if (((1 % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}