#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d - structure for a basic dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
