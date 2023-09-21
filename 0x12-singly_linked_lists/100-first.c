#include <stdio.h>
void _constr(void) __attribute__ ((constructor));
/**
 * _constr - print text before the main function is executed.
 */
void _constr(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
