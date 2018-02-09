include<stdio.h>
int main()
{
int n,a,c,i,count;
printf("enter the two limits");
scanf("%d%d",&a,&c);
for(i=a;i<c;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("%d\n",i);
}
}
