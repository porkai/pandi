#include<stdio.h>
main()
{
    int a,b,c,e;
    printf("enter the num\n");
    scanf("%d",&a);
printf("enter the numbers\n",a);
scanf("%d%d%d",&b,&c,&e);
if(e<c)
printf("%d",e)
else if(e<b)
printf("%d",e);
else if(c<b)
printf("%d",c);
else if(c<e)
printf("%d",c);
else if(b<c)
printf("%d",b);
else if(b<e)
printf("%d",b);
}
