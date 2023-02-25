#include<stdio.h>

int main()
{
    int factorial(int num);
    int nPr(int n, int r);
    int nCr(int n, int r);

    int n, r; 
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r); // read n , r from user
    printf("nPr = %d\n", nPr(n,r));
    printf("nCr = %d\n", nCr(n,r));

    return 0;
}

int factorial(int num){
    int result = 1;
    if(num == 0) return result;
    else{
        for(int i = 1; i <= num; i++) result *= i;
    }
    return result;
}

int nPr (int n, int r){
   
    int result =  factorial(n) / factorial(n-r); // nPr = n! / (n-r)!   
    return result;
}

int nCr (int n, int r){
   
    int result = factorial(n) / ( factorial(n-r) * factorial(r) );// nCr = n! / { (n-r)! * r! }   
    return result;
}
