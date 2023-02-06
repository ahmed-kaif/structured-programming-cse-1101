#include<stdio.h>
int main()
{
    int n,q;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element going to be searched = ");
    scanf("%d", &q);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == q) {
            printf("### %d is found at position: %d\n", q, i+1);
            return 0;
        }
        else continue;
    }
    printf("### %d is not found.\n", q);

    return 0;
}