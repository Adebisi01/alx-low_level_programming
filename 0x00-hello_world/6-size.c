#include <stdio.h>
/**
 * main - function prints sizes
 * Return: 0 by default
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longType;
	long long int longsType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longsType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
