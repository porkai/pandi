#include<stdio.h>
void main()
{
	int i,a,n;
	printf("enter the range");
	scanf("%d %d",&i,&a);
	for(n=i+1;n<=a;n++)
	{
		if(n%2==1)
		printf("%d ",n);
		
	}
}
