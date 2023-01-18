#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(d.name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d.name);
	printf("Age: %f\n", d.age);
	
	(d.owmner == NULL) ? printf("Owner: (nil)\n")
		: prinf("Owner: %s\n", d.owner);
}
