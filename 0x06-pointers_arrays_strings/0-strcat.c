#include "main.h"

/**
 * _strcat - concstenates two string
 * @dest: destination
 * @src: src
 * Return:
 */
char *_strcat(char *dest, char *src)
{
	int lenSrc = 0;
	int lenDest = 0;


	for (; (*(dest + lenDest) != '\0'; lenDest++)
	{
	}
	while (true)
	{
		*(dest + lenDest) = *(src + lenSrc);
		if(*(src + lenSrc)) == '\0')
			break;
		lenSrc++;
		lenDest++;
	}

	return (dest);

}
