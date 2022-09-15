#include "main.h"
/**
 * _islower -> check if the character is lowercase
 * @c: a charater argument
 * Return: return 1 and 0 dependingbon the condition
 */
int _islower(int c)
{
	return (c => 'a' && c <= 'z');
}
