#include<stdio.h>
int main()
{
    int n;
    FILE *fin, *fe, *fo;

    fin = fopen("Data.txt", "r");
    fe = fopen("Even.txt", "w");
    fo = fopen("Odd.txt", "w");

    while(fscanf(fin, "%d", &n) != EOF){
        if(n%2 == 0) {
            fprintf(fe, "%d", n);
        } else {
         fprintf(fo, "%d", n);
        }
    }
}
