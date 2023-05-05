#include <stdio.h>
void sort(int arr[], int n);

int main()
{
  int n;
  printf("How many numbers: ");
  scanf("%d", &n);
  int arr[n];
  for(int i =0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("Before Sorting:\n");
  for(int i =0; i < n; i++)
    printf("%d ", arr[i]);

  sort(arr, n);
  printf("\nAfter Sorting:\n");
  for(int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

void sort(int arr[], int n)
{ 
  int temp;
  
  for(int i = 0; i < n; i++) {
    for(int j = i+1; j < n; j++) {
      if(*(arr+i) > *(arr+j)) { // arr[i] > arr[j]
        temp = *(arr+i); // temp = arr[i]
        *(arr+i) = *(arr+j); // arr[i] = arr[j];
        *(arr+j) = temp; // arr[j] = temp
      }
    }
  }
}
