#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer struct
 * @name: pointer to name of dog
 * @age: age varible of dog
 * @owner: pointer to owner of the dog
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->age = age;
d->name = name;
d->owner = owner;
}
}
