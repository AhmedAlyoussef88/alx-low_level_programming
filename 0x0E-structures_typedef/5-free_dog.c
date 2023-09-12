#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated for dog object
 * @d: input parameter dog object pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return NULL;
	free(d->name);
	free(d->owner);
	free(d);
}
