#include "main.h"

/**
 * _strcat - concstenates two string
 * @dest: destination
 * @src: src
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lenSrc = 0;
	int lenDest = 0;


	while (*(dest + lenDest) != '\0')
	{
		lenDest++;
	}
	while (1 == 1)
	{
		if (*(src + lenSrc) == '\0')
		{
			break;
		}
		*(dest + lenDest) = *(src + lenSrc);
		lenSrc++;
		lenDest++;
	}
	return (dest);
}
