#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a, i, n ,sum  = 0;
    printf("How many numbers: ");
    scanf("%d", &n);
    a = (int *) malloc(sizeof(int) * n); // array
    printf("\nEnter Numbers:\n");

    for(i = 0; i < n; i++)
        scanf("%d", a+i);
    for(i = 0; i < n; i++)
        sum = sum + *(a+i);

    printf("Sum = %d\n", sum);

    return 0;

}
