#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - structure
 * @name: name of s dog
 * @owner: owner of the dog
 * @age: dogs age
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
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
