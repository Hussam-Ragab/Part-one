/*
 * Write a program that reads a student grade percentage and prints "Excellent"
 * if his grade is greater than or equal 85, "Very Good" for 75 or greater;
 * "Good" for 65, "Pass" for 50, "Fail" for less than 50.
 *
 * */

#include <stdio.h>

int main(void)
{
	int grade;
	printf("enter student grade\n");
	fflush(stdout);
	scanf("%d",&grade);
	if(grade>=85)
	{
		printf("Excellent\n");
	}
	else if(grade<85 && grade>=75)
	{
		printf("Very Good\n");
	}
	else if(grade<75 && grade>=65)
	{
		printf("Good\n");
	}
	else if(grade<65 && grade>50)
	{
		printf("Pass\n");
	}
	else
	{
		printf("Fail\n");
	}

	return 0;
}
