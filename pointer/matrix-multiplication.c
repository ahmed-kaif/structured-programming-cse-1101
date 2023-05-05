#include<stdio.h>
int main()
{
    int n,m,l;
    scanf("%d %d %d", &n, &m, &l);
    int a[n][m];
    int b[m][l];
    long long res[n][l];
    long long s = 0;
  // input matrix 1
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
  // input matrix 2
    for(int i = 0; i < m; i++)
        for(int j = 0; j < l; j++)
            scanf("%d", &b[i][j]);
  
  int *p1 = *a, *p2 = *b;

  // multiplication 
  // c[i][j] = sum (k=1 to m) (a[i][k] * b[k][j])
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            for(int k =0; k < m; k++){
                s += *(*(a+i)+k) * *(*(b+k)+j);  
            }
            res[i][j] = s;
            s = 0;
        }
    }
  // print result
     for(int i = 0; i < n; i++){
        for(int j = 0; j < l-1; j++){
            printf("%lld ", res[i][j]);
        }
        printf("%lld\n",res[i][l-1]);
    }
}
