#include "main.h"

/**
 * main - Prints the alphabet..
 *
 * Return: Always 0 (Success).
 * print_alphabet - Prints alphabet, in lowercases, end with new line.
 */
void print_alphabet(void)
{
	int i = 0;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
