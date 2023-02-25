#include<stdio.h>
int main()
{
    int n,m; // 1st array size, 2nd array size
    
    printf("Enter two array size: ");
    scanf("%d %d", &n, &m);
    int arr1[n]; // 1st sorted array
    int arr2[m]; // 2nd sorted array
    int final[n+m]; // the single merged sorted array

    printf("Enter 1st sorted array elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]); // 1st array input
        final[i] = arr1[i]; // from 0 to n-1 element
    }
    
    printf("Enter 2nd sorted array elements:\n");
    for(int i = 0; i < m; i++){
        scanf("%d", &arr2[i]); // 2nd array input 
        final[n+i] = arr2[i]; // from n to m-1 element
    }
    // sorting the final array
    for(int i = 0; i < (n+m); i++ )
    {
        for(int j = i+1; j < (n+m); j++){
            if(final[i] > final[j]) { //checking if current element is greater than next element
                int temp = final[i]; // copy current element to temp
                final[i] = final[j]; // set current to next
                final[j] = temp; // set next to current
            }
        }
    }
    // printing the final array
    printf("The merged array sorted in ascending order:\n");
    for(int i = 0; i < (n+m); i++ )
    {
        printf("%d ", final[i]);
    }
    printf("\n");

    return 0;

}