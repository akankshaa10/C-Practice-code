#include <stdio.h>

int min(int a, int b)
{
    return a>b?b:a ;
}

int findMinRec(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Smallest in given array is %d", findMinRec(arr, n));
    return 0;
}