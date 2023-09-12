#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: input parameter pointer
 */
void print_dog(struct dog *d)
{
	if(d)
	{
		if (d->name == NULL)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Name: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
