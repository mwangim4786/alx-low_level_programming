#ifndef DOG
#define DOG

/**
 * struct dog - Structure for dog
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
