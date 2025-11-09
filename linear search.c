#include<stdio.h>
int main()
{
	int a[20],i,key,n,pos,found=0;
	printf("how many elements?");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
printf("\nenter element to search:");\
scanf("%d",&key);
for(i=0;i<n;i++)
{
	if(key==a[i])
	{	found=1;
		pos=i;
	}
}
if(found==1)
	printf("element found at index:%d",pos);
else
	printf("element not found.");
}
