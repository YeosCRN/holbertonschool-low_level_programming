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

	firulais = malloc(sizeof(dog_t));
	if (firulais == NULL)
		return (NULL);

	firulais->name = malloc(strlen(name + 1));
	firulais->owner = malloc(strlen(owner + 1));

	strcpy(firulais->name, name);
	strcpy(firulais->owner, owner);

	firulais->name = name;
	firulais->age = age;
	firulais->owner = owner;

	return (firulais);
}
