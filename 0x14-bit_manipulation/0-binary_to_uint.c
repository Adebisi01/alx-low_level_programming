#include "main.h"

/**
 * binary_to_uint - convert binary ti unsigned int
 * @b: binary string
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);

	for (result = 0; *b; b++)
	{
		if (*b == '1')
			result = (result << 1) | 1;
		else if (*b == '0')
			result = result << 1;
		else
			return (0);
	}
	return (result);
}
