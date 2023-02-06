#include<stdio.h>
int main()
{
    int num1, num2;
    long long int result;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    char sign;
    printf("Operation to be performed (+,-,*,/): ");
    scanf(" %c", &sign);
    switch(sign)
    {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        default: printf("Wrong Sign\n");
    }

    printf("The Result = %lld\n", result);
    return 0;

}
