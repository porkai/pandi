#include <stdio.h>
int main()
{
    long long num;
    int ca= 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num<0)
    {
       
        n /= 10;
        ++ca;
    }

    printf("Number of digits: %d", ca);
}

