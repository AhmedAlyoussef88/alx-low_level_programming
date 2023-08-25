#include "main.h"
/**
 * infinite_add - adds two numbers
 * Where n1 and n2 are the two numbers
 * r is the buffer that the function will use to store the result
 * size_r is the buffer size
 * The function returns a pointer to the result
 * @n1: input parameter1
 * @n2: input parameter2
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: the address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	while (n1[i] != '\0')
		i++;
	
	int j = 0;
	
	while (n2[j] != '\0')
		j++;
	
	if (i > size_r - 1 || j > size_r - 1)
		return NULL;

    int m = 0;
    int k = 0;

    for (i -= 1, j -= 1; k < size_r - 1; i--, j--, k++)
    {
        int n = m;
        if (i >= 0)
            n += n1[i] - '0';
        if (j >= 0)
            n += n2[j] - '0';

        if (i < 0 && j < 0 && n == 0)
            break;

        m = n / 10;
        r[k] = n % 10 + '0';
    }
    r[k] = '\0';

    if (i >= 0 || j >= 0 || m)
        return NULL;

    int l = 0;
    while (l < k)
    {
        m = r[k];
        r[k] = r[l];
        r[l] = m;

        k--;
        l++;
    }

    return r;
}
