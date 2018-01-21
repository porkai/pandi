#include<stdio.h>
int main()
{
    int A[7] = {1, 4, 45, 6, 10, -8};
    int n;
    int arr_size = 7;
        if( hasArrayTwoCandidates(A, arr_size, n))
         printf("Array has two elements with sum ");
     else     
       	printf("Array doesn't have two elements with sum ");
          return 0;
}
