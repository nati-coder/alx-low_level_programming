#include "main.h"

/**
 * main - Prints the alphabet..
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 0;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for(i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
