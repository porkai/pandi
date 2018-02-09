#include <stdio.h>

int main(void) {
	int n,rem,sum;
	scanf("%d",&n);
	while(n!=0)
	n=n/10;
	rem=n%10;
	sum=sum+(rem*rem*rem);
	{
		printf("%d",sum);
	}
	
	
	
	return 0;

}
