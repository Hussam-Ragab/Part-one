/*
 *  Write a program to count number of digits in a decimal number.
 *
 */

#include <stdio.h>

int main(void)
{
	int num,digit = 0;
	printf("enter number\n");
	fflush(stdout);
	scanf("%d",&num);
	while(num != 0)
	{
		num /= 10;
		digit++;
	}
	printf("Number of Digit = %d \n",digit);

	return 0;
}

