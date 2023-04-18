#include "dog.h"

/**
 * init_dog - let us initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: rep name of the dog.
 * @age: rep age of the dog.
 * @owner: rep owner of the dog.
 *
 * Return: no return.
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
