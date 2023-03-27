#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a, *b, *sum, n, i;

    printf("How many numbers: ");
    scanf("%d", &n);

    a = (int *) malloc(sizeof(int) * n); // array a
    b = (int *) malloc(sizeof(int) * n); // array b
    sum = (int *) malloc(sizeof(int) * n); // array sum

    printf("Enter numbers of 1st array: ");
    for(i = 0; i < n; i++)
        scanf("%d", a+i);

    printf("Enter numbers of 2nd array: ");
    for(i = 0; i < n; i++)
        scanf("%d", b+i);

    for(i = 0; i < n; i++)
       {
        *(sum+i) = *(a+i) + *(b+i);
        printf("Sum[%d] = %d\n", i, *(sum + i));
       }

    return 0;




}
