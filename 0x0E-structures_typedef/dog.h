#ifndef DOG_H
#define DOG_H

/**
 *struct dog - data of dogs
 *@name: name of dog
 *@age: age dog
 *@owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
