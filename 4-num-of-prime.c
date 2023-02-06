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
    }
    //check prime
    for(int i = 0; i < n; i++)
    {   
        int flag = 1;

        if(arr[i] <= 1) continue;
        
        else{
                for(int j = 2; j < arr[i]; j++) // check if divisible by any num
                {   if(arr[i] % j == 0){
                        flag = 0;
                        break;
                    }
                }
        }

        if(flag == 1) count++;
        
    }
    printf("Number of prime elements: %d\n", count);

    return 0;
}