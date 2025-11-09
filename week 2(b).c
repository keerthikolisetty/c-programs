#include<stdio.h>
int main()
{
	char ch;
	char s[100];
	char sen[1000];
	scanf("%c",&ch);
	scanf("%s\n",s);
	scanf("%[^\n]%*c",sen);
	printf("%c\n%s\n%s",ch,s,sen);
	return 0;
	
}
