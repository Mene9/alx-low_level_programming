#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success)
 */
int main(void)

{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);


for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
