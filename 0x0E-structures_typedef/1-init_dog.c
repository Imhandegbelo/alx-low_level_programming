#include "main.h"

/** init_dog - initialises a variable of type struct dog
 * @d: pointer to the structure
 * @ name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
