#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description : check if number is positive or negative
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%iis positive/n",n);
	}
	if(n<0)
	{
		printf("%iis negative/n",n);
	}
	if(n==0)
	{
		printf("%i is zero/n",n);
	}

	return (0);
}
