
/*
 *  Print sum of first 100 integers. (With data validation)
 *
 * */

#include <stdio.h>
#define MAX_NUM		100

int main(void)
{
	int sum = 0, iterator;
	for(iterator = 1; iterator <= MAX_NUM; iterator++)
	{
		sum += iterator;
	}
	if(sum == 5050)
	{
		printf("Sum of first 100 integers is correct");
		fflush(stdout);
	}
	else
	{
		printf("Sum of first 100 integers is not correct");
	}

	return 0;
}
