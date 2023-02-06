#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d elements:\n", N);
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    printf("The elements in reverse order:\n");
    for(int i = N-1; i >= 0; i--)
        printf("Element[%d] = %d\n", i+1, arr[i]);

    return 0;
}