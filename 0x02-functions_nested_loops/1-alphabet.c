#include "main.h"
/**
 * print_alphabet -> prints the lowercase alphabets
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}