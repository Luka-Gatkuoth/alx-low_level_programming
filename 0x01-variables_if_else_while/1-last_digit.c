#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
* main- get a random number and check it last digit , compared with 5
* Return: 0 (success)
*/
int main(void)
{
int n;
int num;

srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;

if  (num > 5)
{
printf("the last digit of %d is %d and is greater than 5\n", n, num);
}
else if ((num == 0))
{
printf("last digit of %d is %d is 0\n", n, num);
}
else
{
printf("last digit of %d is %d and is less than 6 not 0\n", n, num);
}

return (0);
}
