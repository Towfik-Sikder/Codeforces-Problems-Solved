#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0, j = 1; i < n; i = i + 2, j = j + 2){
        sum1 += arr[i];
        sum2 += arr[j];
    }

    printf("%d %d\n", sum1, sum2);

    return 0;
}
