#include<stdio.h>

struct Product {
    char name[30];
    float price;
    int quantity;
};

int main()
{
    int n;
    printf("How many products? ");
    scanf("%d", &n);
    struct Product p[n];
    for(int i = 0; i < n; i++){
        scanf("%s", p[i].name);
        scanf("%f", &p[i].price);
        scanf("%d", &p[i].quantity);
    }
    FILE *fstore, *fr;
    fstore = fopen("store.txt", "w");
    fr = fopen("store.txt", "r");
    for(int i =0; i < n; i++){
        fprintf(fstore, "%s %f %d\n", p[i].name, p[i].price, p[i].quantity);
    }
    fclose(fstore);
    struct Product c[n];
    float value = 0;
    int i =0;
    while(fscanf(fr, "%s %f %d", c[i].name, &c[i].price, &c[i].quantity) != EOF) {
        value += (c[i].price*c[i].quantity);
        i++;
    }
    printf("Value = %f\n", value);

    fclose(fr);
}
