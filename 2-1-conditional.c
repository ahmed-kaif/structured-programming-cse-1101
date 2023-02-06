#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Minimum: %d\n", (num1 > num2)? num2 : num1);

    return 0;
}
