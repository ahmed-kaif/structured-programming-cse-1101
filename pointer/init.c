// Initializing Pointers
#include <stdio.h>
int main()
{
  int a = 10;
  int *ptr_to_a;
  ptr_to_a = &a;
  printf("a: %d\n", a);
  printf("value inside the pointer: %d\n",*ptr_to_a);
  printf("address of a: %p\n", &a);
  printf("Address inside the pointer: %p\n", ptr_to_a);
  printf("address of the pointer itself: %p\n", &ptr_to_a);
  return 0;
}
