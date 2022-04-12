#include "main.h"

/**
 * _abs - Print the last digit
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
	return last;
}
