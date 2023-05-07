// search by roll
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("How many students? ");
    scanf("%d", &n);
    struct Student s[n];

    for(int i =0; i < n; i++) {
        printf("Student #%d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // search by roll
    int query;
    printf("\nEnter Roll: ");
    scanf("%d", &query);

    for(int i =0; i< n; i++) {
        if(query == s[i].roll) {
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            break;
        }
    }

    return 0;
}
