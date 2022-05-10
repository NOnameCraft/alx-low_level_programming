#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of struct dog
 * @d: argument
 * @name: argument
 * @age: argument
 * @owner: argument
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if(d == 0)
    return;
    d->name = name;
    d->age = age;
    d->owner = owner;
}