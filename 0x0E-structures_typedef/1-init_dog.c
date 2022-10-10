#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type struck dog
 * @d: struck dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: no return
 */
void init_dog(struck dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struck dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
