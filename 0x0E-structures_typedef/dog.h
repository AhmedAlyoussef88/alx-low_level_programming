#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog info
 * @name: name property string
 * @age: age property int
 * @owner: owner name property string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
