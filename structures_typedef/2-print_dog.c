#include "dog.h"
/**
 * print_dog - funct
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	char *name;
	int age;
	char *owner;

	if (d)
	{
		d->name;
		d->age;
		d->owner;
		NULL == "";
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age == 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
