// calculate total chocolate
#include<stdio.h>

int Add(int n) {
    return ( (n*(n+1))/2 );
}

int main() {

    int N;
    scanf("%d", &N);
    printf("%d", Add(N));

    return 0;

}
