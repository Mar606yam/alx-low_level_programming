#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Description: a program that prints the alphabet in lowercase.
*
* Return: 0 on success, 1 on error
*/
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
