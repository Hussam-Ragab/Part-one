
/*
 *  Write a program to calculate the power of a number. The number and its power are input from user.
 *
 * */

#include <stdio.h>


int main(void)
{
	int num, power,iterator,Result = 1;
	printf("enter number and power\n");
	fflush(stdout);
	scanf("%d%d",&num,&power);

	for(iterator = power; iterator > 0; --iterator)
	{
		Result *= num;
	}

	printf("Power of %d = %d\n",num,Result);

	return 0;
}