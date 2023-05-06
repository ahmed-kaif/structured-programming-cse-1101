#include <stdio.h>
#include <string.h>

struct Person
{
    char name[30];
    long long int phone;
};

int main()
{
    int i, n;

    // input
    printf("How many persons? ");
    scanf("%d", &n);

    struct Person a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s", a[i].name);

        printf("Telephone: ");
        scanf("%lld", &a[i].phone);
    }
    long long int q;
    printf("\n-Query-\n\nEnter Telephone: ");
    scanf("%lld", &q);

    for (int i = 0; i < n; i++)
    {
        if (q == a[i].phone)
        {
            printf("Name: %s\n", a[i].name);
            break;
        }
    }

    // query with name
    char nq[30];
    printf("\n-Query-\n\nEnter Name: ");
    scanf("%s", nq);

    for (int i = 0; i < n; i++)
    {
        if(strcmp(a[i].name, nq) == 0)
        {
            printf("Telephone: %lld", a[i].phone);
            break;
        }

    }

    return 0;
}
