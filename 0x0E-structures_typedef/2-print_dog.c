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
	} else
	{

		if ((*d).name == NULL)
		{
			printf("Name: (nil)");
		} else
		{
			printf("Name: %s\n", (*d).name);
		}
		if ((*d).age == NULL)
		{
			print("Age: (nil)");
		} else
		{
			printf("Age: %f\n", (*d).age);
		}
		if ((*d).owner == NULL)
		{
			printf("Owner: (nil)");
		} else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
