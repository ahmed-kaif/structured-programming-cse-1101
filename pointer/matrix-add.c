#include <stdio.h>
int main()
{
  int r,c;
  printf("Enter Row and Col: \n");
  scanf("%d %d", &r, &c);
  int m1[r][c], m2[r][c];

  // input matrix
  printf("Enter Matrix 1: \n");
  for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++)
      scanf("%d",&m1[i][j]);
  
  printf("Enter Matrix 2: \n");
  for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++)
      scanf("%d",&m2[i][j]);

  int *pt1 = &m1[0][0], *pt2 = &m2[0][0]; 
  int sum[r][c];

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      sum[i][j] = *pt1 + *pt2;
      pt1++;
      pt2++;
    }
  }

  printf("After Addition:\n");
  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
    {
      printf("%d ",sum[i][j]);
    }
    printf("\n");
  }
}
