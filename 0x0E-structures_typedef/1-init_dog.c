#include "dog.h"

/**
 * init_dog - initializes structure of type dog
 * @d: pointer to ythe structure
 * @name: pointer to the name of the dog
 * @age: age dog
 * @owner: pointer to dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
