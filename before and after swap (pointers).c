#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d%d",&a,&b);
	printf("\n before swap a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\n after swap a=%d,b=%d",a,b);
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("\n inside swap()function a=%d,b=%d,*a,*b");
}
