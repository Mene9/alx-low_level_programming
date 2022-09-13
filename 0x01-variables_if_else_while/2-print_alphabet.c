#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)

{
char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)

putchar(letter);

putchar('\n');

return (0);
}
