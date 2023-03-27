// Program to see the workings of pointers
#include<stdio.h>

int main()
{

int *p, a;

a = 22;

printf("Address of a: %p\n", &a);
printf("Value of a: %d\n\n", a);

p = &a;
printf("Address of pointer p: %p\n", p);
printf("Content of pointer p: %d\n\n", *p);

a = 10;
printf("Address of pointer p: %p\n", p);
printf("Content of pointer p: %d\n\n", *p);

*p = 2; // setting a = 2
printf("Address of a: %p\n", &a);
printf("Value of a: %d\n\n", a);

return 0;



}


