#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Description: false or true validation
*
* Return: 0 on success, 1 on error
*/
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
		printf("Last digit of %i is %i and greater than 5\n", n, a);
	else if (a == 0)
		printf("Last digit of %i is %i and is 0\n", n, a);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, a);
	return (0);
}
