#include "3-calc.h"
/**
 * get_op_func -  selects the correct function to perform the operation
 * asked by the user. You’re not allowed to declare any other function.
 * @s: input parameter
 * Return: returns a pointer to the function that corresponds to the
 * operator given as a parameter. Example: get_op_func("+") 
 * should return a pointer to the function op_add
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
