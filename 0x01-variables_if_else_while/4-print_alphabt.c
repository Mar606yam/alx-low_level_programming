#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Description: A program that prints all the letters except q and e.
*
* Return: 0 on success, 1 on error.
*/
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
