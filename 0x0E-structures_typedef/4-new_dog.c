#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog struct, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
name_copy = strdup(name);
if (name_copy == NULL)
{
free(dog);
return (NULL);
}
owner_copy = strdup(owner);
if (owner_copy == NULL)
{
free(name_copy);
free(dog);
return (NULL);
}
dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;
return (dog);
}
