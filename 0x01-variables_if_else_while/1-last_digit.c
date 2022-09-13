#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{

int n;
int n Last
	srand(time(0));
n = rand() - RAND_MAX / 2;

last = n % 10;

if (Last n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n  Last)
	else if (Last == 0)
		printf("Last digiit of %d is %d and is 0\n", n  Last);
else
	printf("Last digit of %d is %d and is 6 not 0\n", Last);
return (0);

}
