#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > b && a > c && a > d) printf("Max: %d\n", a);
    else if(b > a && b > c && b > d) printf("Max: %d\n", b);
    else if(c > a && c > b && c > d) printf("Max: %d\n", c);
    else if(d > a && d > b && d > c) printf("Max: %d\n", d);

    return 0;
}
