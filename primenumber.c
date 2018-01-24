 #include<stdio.h>
int main( )
{
int a,i,y=0;
printf("Enter the number: ");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
{
y=1;
break;
}
}
if(y==0)
printf("yes");
else
printf("no");
return 0;
}
