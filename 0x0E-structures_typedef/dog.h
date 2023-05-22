#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/* Define typedef for struct dog */
typedef struct dog dog_t;

/*function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
