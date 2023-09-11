#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: First member
 * Return: void
 */
void print_dog(struct dog *d)
{
printf("Name: %s\nAge: %.6f\nOwner :%s\n",  d->name,  d->age, d->owner);
}
