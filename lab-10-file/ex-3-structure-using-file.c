#include<stdio.h>

struct emp {
    char name[30];
    int age;
    float salary;
} p;

int main(){
    FILE *fin, *fo;
    fin = fopen("struct.txt", "r"); // read inputs of struct
    fo = fopen("Out.txt", "w"); // outputs the result

    while(fscanf(fin, "%s %d %f", p.name, &p.age, &p.salary) != EOF) {
        fprintf(fo, "Name: %s , Age: %d, Salary: %f", p.name, p.age, p.salary);
    }
    fclose(fin);
    fclose(fo);
}
