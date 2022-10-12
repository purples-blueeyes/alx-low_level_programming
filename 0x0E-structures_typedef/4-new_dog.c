#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: a newly created dog structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_dog;
	char *cpyname, *cpyowner;
	int len_name = 0, len_owner = 0, l;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	dog_dog = malloc(sizeof(dog_t));

	if (dog_dog == NULL)
		return (NULL);

	cpyname = malloc(len_name + 1);

	if (cpyname == NULL)
		return (NULL);

	for (l = 0; name[l]; l++)
		cpyname[l] = name[l];
	cpyname[l] = '\0';

	cpyowner = malloc(len_owner + 1);

	if (cpyowner == NULL)
		return (NULL);

	for (l = 0; owner[l]; l++)
		cpyowner[l] = owner[l];
	cpyowner[l] = '\0';

	dog_dog->name = cpyname;
	dog_dog->age = age;
	dog_dog->owner = cpyowner;
	return (dog_dog);
}
