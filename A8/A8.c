
/*
 * Write a program that reads a positive integer and checks if it is a perfect square.
 *
 * */

#include <stdio.h>

int main(void)
{
	int num,i;

	do{
		printf("enter number\n");
		fflush(stdout);
		scanf("%d",&num);
	}while(num<=0);

	for(i=1;i<=num;i++)
	{
		if(num == i*i)
		{
			printf("%d is perfect number\n",num);
			break;
		}

	}
	if(num == i*i);
	else
	{
		printf("%d is not perfect number\n",num);
	}

	return 0;

}
