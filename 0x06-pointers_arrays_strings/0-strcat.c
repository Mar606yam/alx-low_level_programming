#include "main.h"

/**
 *  _strcat - concatenates two strings.
 *
 * *dest: pointer to destination input.
 * *src: pointer to sourse input.
 *
 * @src: its the counter for the src string.
 *
 * @dest: its the counter for the dest string.
 *
 * Return: dest;
*/

char *_strcat(char *dest, char *src)
{
	int dest = 0;
	int src = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

