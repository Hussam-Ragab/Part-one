
/*
 * Write a program that print the relation between two integer number if those numbers are equal, not equal and
 * which one contain the higher value.
 *
 * */

#include <stdio.h>

int main(void)
{
	int num1,num2;
	printf("enter two numbers\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
	{
		printf("Number1 = %d Equal Number2 =  %d",num1,num2);
	}
	else
	{
		if(num1>num2)
			printf("Number1 = %d Greater than Number2 =  %d",num1,num2);
		else
			printf("Number2 = %d Greater than Number1 =  %d",num2,num1);
	}

	return 0;
}
