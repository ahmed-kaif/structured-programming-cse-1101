#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N], temp[N];
    printf("Enter %d elements:\n", N);

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        temp[N-1-i] = arr[i];
    }
    //reverse
    printf("The array in reverse order:\n");
    for(int i = 0; i < N; i++)
    {
        arr[i] = temp[i];
        printf("array[%d] = %d\n", i, arr[i]);
    }
    return 0;
}