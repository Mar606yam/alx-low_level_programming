#include <unistd.h>

/**
 * Description main : main - A program that prints a text using write function.
 *             write(int fd , constant void *buf , size_t count)
 * Return:1
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	Write(1, quo, 59);
	return (1);
}
