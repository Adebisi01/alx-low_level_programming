#include "dog.h"

/**
 * print_dog - prints struct
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nothing");
	}
	else if ((*d).name == NULL)
	{
		(*d).name == "(nil)";
	}
	else if ((*d).age == NULL)
	{
		(*d).age == "(nil)";
	}
	else if ((*d).owner == NULL)
	{
		(*d).owner == "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s", (*d).name, (*d).age, (*d).owner);
}
