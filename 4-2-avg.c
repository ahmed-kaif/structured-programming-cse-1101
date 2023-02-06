#include<stdio.h>
int main()
{
    int N, total = 0; 
    printf("Enter number of students: ");
    scanf("%d", &N);
    int ct[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &ct[i]);
        total += ct[i];
    }
    float avg = (float) total / N;
    printf("The avg. class test mark: %0.2f\n", avg);
    return 0;
}