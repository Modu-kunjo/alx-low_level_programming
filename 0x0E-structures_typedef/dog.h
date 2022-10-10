#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Inform the user about the dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Description: A structure in C, about a dog which contain name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - the new name for struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
