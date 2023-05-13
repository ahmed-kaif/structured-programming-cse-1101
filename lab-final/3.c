// 2nd smallest element
#include<stdio.h>

int main()
{
        int n;
        printf("How Many Numbers? ");
        scanf("%d", &n);

        int num[n];

        for(int i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        // sort ascending
        int temp;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(num[i] > num[j]) {
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }

         for(int i = 0; i < n; i++){
            if(num[i] == num[i+1]) continue;
            else {
                printf("The 2nd Smallest Number: %d\n", num[i+1]);
                break;
            }

        }

        return 0;

}
