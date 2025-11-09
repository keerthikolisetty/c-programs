#include<stdio.h>
int main()
{
	float b,h,area;
	printf("Enter base and height(in cm):");
	scanf("%f%f",&b,&h);
	area=(0.5*b*h);
	printf("Area of triangle=%.2fcm",area);
}
