#include<stdio.h>

struct student
{
    char name[30];
    int roll, mark;
};

int main()
{
    int i,n;
    
    // input
    printf("How many students? ");
    scanf("%d", &n);

    struct student a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s", a[i].name);

        printf("Roll: ");
        scanf("%d", &a[i].roll);

        printf("Mark: ");
        scanf("%d", &a[i].mark);
        
        printf("----\n");
    }

    // sort according to mark (descending)
    for (int i = 0; i < n; i++)
    {
        struct student temp;
        for(int j = i+1; j < n; j++){
            if(a[j].mark > a[i].mark) {
                // a[1] > a[0]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            } 
        }
    }
   
    // display
    printf("\nName       Roll     Mark");
    printf("\n----      -----    ------");

    for (int i = 0; i < n; i++)
    {
        printf("\n%-10s %4d   %5d", a[i].name, a[i].roll, a[i].mark);
    }

    return 0;

}