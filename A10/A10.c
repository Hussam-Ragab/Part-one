/*
 *  Write a program to make a simple calculator using switch-case.
 The calculator takes the operation (+ or – or * or /) and takes the two input arguments and
print the results.

 *
 * */

#include <stdio.h>

int main(void)
{
	int input1,input2;
	float Result;
	char operation;
	printf("enter two inputs\n");
	fflush(stdout);
	scanf("%d%d%c",&input1,&input2,&operation);
	printf("enter operation\n");
	fflush(stdout);
	scanf("%c",&operation);

	switch(operation)
	{
	case '+':
		Result = input1 + input2;
		printf("Result = %.1f\n",Result);
		break;
	case '-':
		Result = input1 - input2;
		printf("Result = %.1f\n",Result);
		break;
	case '*':
		Result = input1 * input2;
		printf("Result = %.1f\n",Result);
		break;
	case '/':
		Result = input1 / input2;
		printf("Result = %.1f\n",Result);
		break;
	default:
		printf("Error! operator is not correct");
	}
	return 0;
}
