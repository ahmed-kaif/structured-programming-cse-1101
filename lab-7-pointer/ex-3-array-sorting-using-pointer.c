#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a, i, j, temp, n;
    printf("How many numbers: ");
    scanf("%d", &n);

    a = (int *) malloc(sizeof(int) * n); // array

    for(i = 0; i < n; i++)
        scanf("%d", a+i);
    // sorting
    for(i = n - 1; i > 0; i--)
    {
        for(j = 0; j < i; j++)
            if(*(a+j) > *(a+j+1)) //if(a[0] > a[1])
             {
                temp = *(a+j);  // temp = a[0]
                *(a+j) = *(a+j+1); // a[0] = a[1]
                *(a+j+1) = temp; // a[1] = temp
             }
    }

    for(i = 0; i< n; i++)
        printf("%4d", *(a+i));

    return 0;
}
