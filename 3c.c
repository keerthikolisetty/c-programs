#include<stdio.h>
#define PI 3.14
int main()
{
	//declare variables
	float radius,area;
	//take input
	printf("Enetr radius of circle(in cm): ");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("Area of circle=%.2f\n",area);
}
