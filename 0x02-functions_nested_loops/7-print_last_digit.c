#include "main.h"

/**
 * print_last_digit - Print the last digit
 * of a number.
 *
 * @i: input number as an integer.
 *
 * Return: The last digit.
 */
int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
										}
}
