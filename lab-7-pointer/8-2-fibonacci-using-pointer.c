#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *fib, i;

    printf("n = ");
    scanf("%d", &n);

    fib = (int *) malloc(sizeof(int) * n); // array of fib

    *(fib) = 0; // fib[0] = 0
    *(fib + 1) = 1; // fib[1] = 1
    // 0 1 1 2 3 5 8 13

    for(i = 2; i < n; i++)
    {
        *(fib + i) = *(fib + i - 1) + *(fib + i - 2); // fib[3] = fib[2] + fib[1]
    }

    for(i = 0; i < n; i++)
        printf("%d ", *(fib + i));

    return 0;




}
