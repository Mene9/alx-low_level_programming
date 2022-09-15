#include "main.h"
/**
 * print_alphabet_x10 -> print the lowercase alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n;
	int x;

	for (x = 0; x < 10; n++)
	{
		for (x = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
