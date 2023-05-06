#include <stdio.h>

int i = 0;

void asc(int arr[],int i){
    int temp;
    for(int j = 0; j < i; j++) {
        for(int k = j+1; k < i; k++) {
            if(arr[j] > arr[k]) {
                temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int num, arr[100];

    FILE *fin, *fo;

    fin = fopen("Num.txt", "r");
    fo = fopen("asc.txt", "w");

    while(fscanf(fin, "%d", &num) != EOF) {
                arr[i] = num;
                i++;
    }

    asc(arr, i);

    for(int k =0; k < i; k++) {
        fprintf(fo, "%d ", arr[k]);
    }
}
