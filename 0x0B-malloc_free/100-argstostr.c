#include <stdlib.h>
#include "main.h"
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: input parameter int
  *@av: input parameter string
  *Return: NULL if ac == 0 or av == NULL
  *pointer to a new string, or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	int x = 0, y = 0, t = 0, s = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			s++;
			y++;
		}
		s++;
		x++;
	}
	arg = malloc((sizeof(char) * s) + 1);
	if (arg == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			arg[t] = av[x][y];
			y++;
			t++;
		}
		arg[t] = '\n';
		t++;
		x++;
	}
	arg[t] = '\0';
	return (arg);
}
