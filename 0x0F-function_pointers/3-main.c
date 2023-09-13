 #include "3-calc.h"
/**
 * main - entry pstrint
 * @argc: input parameter
 * @argv: input parameter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ar1, ar2, res;
	char str;
	int (*f)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	ar1 = atstri(argv[1]);
	f = get_strp_f(argv[2]);
	ar2 = atstri(argv[3]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	str = *argv[2];
	if ((str == '/' || str == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = f(ar1, ar2);
	printf("%d\n", res);
	return (0);
}
