// display max using pointer
#include<stdio.h>
int main()
{
    int a, b;
    int *p1, *p2;
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    printf("Max: %d",
           (*p1 > *p2) ? *p1 : *p2 );

    return 0;
}
