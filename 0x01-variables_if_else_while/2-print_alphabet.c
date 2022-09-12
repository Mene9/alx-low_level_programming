#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Description:Write a program that prints the alphabet in lowercase
 * return: always 0 (success)
 *
 */
int main(void)
{
char n;

for (n = 'a' ; n <= 'z' ; n++)
{
putchar(n);
}
putchar('\n');

return (0);
}
