#include "dog.h"
/**
 * init_dog - funct
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *firulais;
	char *non, *own;

	firulais = malloc(sizeof(dog_t));
	if (firulais == NULL)
		return (NULL);

	non = malloc(strlen(name + 1));
	if (firulais->name == NULL)
	{
		free(non);
		free(firulais);
		return (NULL);
		strcpy(non, name);
	}
	own = malloc(strlen(owner + 1));
	if (own == NULL)
	{
		free(own);
		free(non);
		free(firulais);
		return (NULL);
		strcpy(own, owner);
	}

	firulais->name = non;
	firulais->age = age;
	firulais->owner = own;

	return (firulais);
}
