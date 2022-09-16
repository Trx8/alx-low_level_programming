#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: The integer to be printed.
 *
 */

void print_number(int n)
{
	unsigned int num = n;


	/* confirm if negative*/
	if (n  < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*print the first feww digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
