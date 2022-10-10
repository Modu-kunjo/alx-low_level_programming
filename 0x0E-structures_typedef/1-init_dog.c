#include "dog.h"

/**
 * init_dog - initializes variable of type struck dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: no return
 */
void init_dog(struck dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner =owner;
	}
}
