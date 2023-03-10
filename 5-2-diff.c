#include<stdio.h>
int difference(int x, int y){
    int result = x - y;
    if(result < 0) result = - result;
    return result;
}
int main()
{
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("%d ~ %d = %d\n", num1, num2 , difference(num1, num2));

    return 0;
}