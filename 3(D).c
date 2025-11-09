#include<stdio.h>
int main()
{
	int english,maths,science,psychology,history,total;
	float average;
	printf("Enter the marks of english,maths,science,pyschology,and history:\n");
	scanf("%d%d%d%d%d",&english,&maths,&science,&psychology,&history);
	total=english+maths+science+psychology+history;
	average=total/5.0;
	printf("Total marks of the student:%d\n",total);
	printf("Average marks of the student:%2f\n",average);
}
