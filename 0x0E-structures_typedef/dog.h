#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains informations
 * @name: the Dog's name
 * @age: the Dog's age
 * @owner: the Dog's owner
 *
 *Description: this struct contains informations regarding a Dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/

