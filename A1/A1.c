
/*
 * Write a program that take two integers from the user and print the results of this equation:
 * Result = ((num1 + num2) * 3) – 10
 *
 * */

#include <stdio.h>

int main(void)
{
	int num1,num2,Result;
	printf("enter two numbers\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	Result = ((num1 + num2) * 3) - 10;
	printf("Result = %d\n",Result);

	return 0;
}
