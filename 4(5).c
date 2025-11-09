#include<stdio.h>
int main()
{
	int A=5,B=3;
	char ch;
	printf("Enter character:");
	scanf("%c,&ch");
	if (ch=='+')
		printf("\n SUM=%d",A+B);
	else if(ch=='-')
		printf("\n MUL=%d",A-B);
	else if (ch=='*')
		printf("\n Q=%d",A/B);
	else if(ch=='$')
		printf("It is a dollar symbol");
	else if(ch=='&')
		printf("&=%d",A&B);
	else
		printf("\n Invalid");
}
