#include "dog.h"

/**
 * new_dog - makes new dog
 * dog_t - new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * struct dog_t - new dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newDog;

	newDog = {name, age, owner};
	return (dog_t);
}
