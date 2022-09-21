#include "main.h"

/**
 * _strcat - concstenates two string
 * @dest: destination
 * @src: src
 * Return:
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i]
	}
	return (dest);

}
