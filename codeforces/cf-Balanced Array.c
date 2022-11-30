#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int sum1 = 0;
        int sum2 = 0;

        for(int i = 0, j = 2; i < n / 2; i++, j = j + 2){
            arr[i] = j;
            sum1 = sum1 + arr[i];
        }
        for(int i = n / 2, j = 1; i < n; i++, j = j + 2){
          arr[i] = j;
                sum2 = sum2 + arr[i];

        }
        int x = 0;
        while(sum1 > sum2){
            sum2 = sum2 - x;
            x = x + 2;
            sum2 = sum2 + x;
        }
        arr[n - 1] = arr[n - 1] + x;
        if(sum1 == sum2){
            printf("YES\n");
            for(int i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else{
            printf("NO\n");
        }
    }


    return 0;
}
