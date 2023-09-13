#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: input parameter string
 * @f: input parameter pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
