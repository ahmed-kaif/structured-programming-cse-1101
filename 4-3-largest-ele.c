#include<stdio.h>
int main()
{
    int n, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(i == 0) max = arr[0];
        else if(arr[i] > max) max = arr[i];
    }
    printf("The largest element is: %d\n", max);
}