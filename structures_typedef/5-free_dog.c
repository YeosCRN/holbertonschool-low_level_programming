#include "dog.h"
/**
 * free_dog - funct
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(dog_t->name);
		free(dog_t->owner);
		free(d);
	}
}
