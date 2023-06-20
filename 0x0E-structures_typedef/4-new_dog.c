#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length = 0, owner_length = 0, i = 0;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[name_length])
		name_length++;
	name_length++;
	dog->name = malloc(name_length * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (i < name_length)
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->age = age;
	i = 0;
	while (owner[owner_length])
		owner_length++;
	owner_length++;
	dog->owner = malloc(owner_length * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_length; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
