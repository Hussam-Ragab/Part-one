
/*
 * Write a program for converting temperature from degrees Celsius to degrees Fahrenheit,given the formula:
 * F = C x 9/5 + 32;
 *
 * */

#include <stdio.h>

int main(void)
{
	float Fahrenheit,Celsius;
	printf("enter temperature in celsius\n");
	fflush(stdout);
	scanf("%f",&Celsius);
	Fahrenheit = (Celsius * (9/5)) + 32;
	printf("Temperature in Fahrenheit = %.2f\n",Fahrenheit);

	return 0;
}

