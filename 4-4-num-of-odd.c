#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int count = 0;
    printf("Enter %d elements:\n", n);
    for(int i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2) count++; // if odd then 1
    }
    printf("Number of odd elements: %d\n", count);

    return 0;
}