#include "dog.h"
#include <stdlib.h>
/**
 * Getstrlength - get the string length
 * @str: input parameter string
 * Return: the length of the string
 */
int Getstrlength(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *strcopy - string copy
 * @dest: input parameter destination string pointer
 * @src: input parameter source string
 * Return: destination pointer
 */
char *strcopy(char *dest, char *src)
{
	int strLen = 0, i = 0;

	while (src[strLen] != '\0')
	{
		strLen++;
	}
	while (i < strLen)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog object
 * @name: input parameter dog name
 * @age: input parameter dog age
 * @owner: input parameter dog owner name
 * Return: dog object pointer (Success), Null (Fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogObj;
	int str1Len = Getstrlength(name), str2Len = Getstrlength(owner);

	dogObj = malloc(sizeof(dog_t));
	if (dogObj == NULL)
		return (NULL);
	dogObj->name = malloc(sizeof(char) * (str1Len + 1));
	if (dogObj->name == NULL)
	{
		free(dogObj);
		return (NULL);
	}
	dogObj->owner = malloc(sizeof(char) * (str2Len + 1));
	if (dogObj->owner == NULL)
	{
		free(dogObj);
		free(dogObj->name);
		return (NULL);
	}
	strcopy(dogObj->name, name);
	strcopy(dogObj->owner, owner);
	dogObj->age = age;
	return (dogObj);
}
