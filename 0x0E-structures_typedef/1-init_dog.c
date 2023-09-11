#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: forth member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)

d->name = name;
d->age = age;
d->owner = owner;
}
