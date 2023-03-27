#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a, *b, *max;

    a = (int *) malloc(sizeof(int)); // a is address
    b = (int *) malloc(sizeof(int)); // b is address

    printf("a = ");
    scanf("%d", a); // no need of & because a is an address

    printf("b = ");
    scanf("%d", b); // no need of & because b is an address

    if(*a > *b) max = a; // checking value inside addr a and addr b
    else max = b;

    printf("maximum = %d\n", *max); // printing content of max addr.

    // Freeing the memory of allocated pointers
    free(a);
    free(b);

    return 0;

}

// Dynamic Memory Allocation using malloc

/*

Declaration

( cast type ) malloc (size) // size in byte. for int sizeof(int) -> 4 bytes
if we want 20 Bytes -> 5 * sizeof(int)

run time memory allocation.

*/
