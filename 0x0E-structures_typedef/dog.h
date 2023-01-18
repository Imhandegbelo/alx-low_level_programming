#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - structure of dogs
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char  *name;
	float age;
	char *owner;
}


#endif /*DOG_H*/
