
/*
 *Write a program that reads the radius of a circle and calculates the area and circumference then prints the results.
 *
 * */

#include <stdio.h>
#define PI 3.14

int main(void)
{
	float radius,area,cirumference;
	printf("enter radius of circle\n");
	fflush(stdout);
	scanf("%f",&radius);
	area = radius * radius;
	cirumference = 2 * PI * radius;
	printf("Area of circle = %.1f\nCirumference of circle = %.1f",area,cirumference);

	return 0;
}
