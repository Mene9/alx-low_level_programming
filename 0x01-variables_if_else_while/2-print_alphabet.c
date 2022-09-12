#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
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
