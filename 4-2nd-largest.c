#include<stdio.h>
int main()
{
    int n, max, max2;
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
    printf("Difference\n");
    for(int i = 0; i < n; i++)
    {
        arr[i] = max - arr[i];
        printf("%d\n", arr[i]);
        if(i == 0) max2 = arr[i];
        else if(arr[i] != 0 && arr[i] < max2) max2 = arr[i];
    }

    printf("The largest element is: %d\n", max);
    printf("The 2nd Largest element is: %d\n", max -  max2 );
}
