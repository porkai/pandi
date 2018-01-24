#include<stdio.h>
int main()
{
	int n,i,temp,a;
	printf("enter a no\n");
	scanf("%d",&n);
	temp=n;
    while(n>0)
    {
    	a=10*a+n%10;
    	n=n/10;
}
if(temp==a)
	printf("Yes");
	else
	{
		printf("No");
	}
	return 0;
}
