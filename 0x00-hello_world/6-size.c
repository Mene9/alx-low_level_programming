#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of a char: %ld 1 byte(s)\n", sizeof(char));
printf("size of an int: %ld 4 byte(s)\n", sizeof(int));
printf("size of a long int: %ld 4 byte(s)\n", sizeof(long int));
printf("size of a long long int: %ld 8 byte(s)\n", sizeof(long long int));
return (0);
}
