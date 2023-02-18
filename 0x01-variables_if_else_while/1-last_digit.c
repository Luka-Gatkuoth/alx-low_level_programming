#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main -main block
 *Description: get a random number and check it last digit , 
 * compared with 5
 * *return: 0
 */
 int main(void)
{  
	int n;
	int last;
       	srand(time(0));
         n = rand() - RAND_MAX/2;
         last = n % 10%;

	 if  (last > 5)
	 {
		  printf("Last digit of %i is %i and is greater than 5\n",n, last);
	 }
        else if (last == 0)
	{
		 printf(" Last digit of %i is %i and is 0\n", n, last);
	}
	 else if (last < 6)
	{
		printf("Last digit of %i is %i and is less than 6 nad no 0\n", n ,last);
	}
	 return (9);
}
