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
	dog_t *new_dog;

	if (new_dog = (struct dog_t *)malloc(sizeof(dog_t)) == NULL)
		return (NULL);
	else
	{
		strcpy((new_dog->name), name);
		new_dog->age = age;
		strcpy((new_dog->owner), owner);
		return (new_dog);
	}
}