/*
 *  Write a program to reverse a number.
 *
 * */

#include <stdio.h>

int main(void)
{
	int num,reverse = 0,remainder;
	printf("enter number\n");
	fflush(stdout);
	scanf("%d",&num);
	while(num != 0)
	{
		remainder = num%10;
		reverse = reverse * 10 + remainder;
		num /= 10;
	}
	printf("Reverse = %d \n",reverse);

	return 0;
}
