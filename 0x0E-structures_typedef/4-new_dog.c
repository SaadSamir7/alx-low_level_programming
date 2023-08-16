#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - a function that creates a new dog
* @name: the name of the dog
* @age: holds the age integer
* @owner: holds the owner
* Return: the pointer to the dog
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	int i = 0, j = 0, l, k;

	dogg = malloc(sizeof(dog_t));
	if (dogg == 0)
		return (0);
	if (name != 0)
		while (name[i] != '\0')
			i += 1;
	if (owner != 0)
		while (owner[j] != '\0')
			j += 1;
	dogg->name = malloc(i * sizeof(char) + 1);
	if (dogg->name == 0)
	{
		free(dogg);
		return (0);
	}
	dogg->owner = malloc(j * sizeof(char) + 1);
	if (dogg->owner == 0)
	{
		free(dogg->name);
		free(dogg);
		return (0);
	}
	for (k = 0; k < i; k += 1)
		dogg->name[k] = name[k];
	for (l = 0; l < j; l += 1)
		dogg->owner[l] = owner[l];
	dogg->name[k] = '\0';
	dogg->owner[l] = '\0';
	dogg->age = age;
	return (dogg);
}
