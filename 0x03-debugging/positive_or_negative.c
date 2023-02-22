#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"main.h"

/**
* main- print if the number is positive, negative or 0
* Return: always 0( success)
*/

int main(void)
{
	int i;
i = 0;


	/*srand(time(0));
	n = rand() - RAND_MAX / 2;*/

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

	return (0);
}
