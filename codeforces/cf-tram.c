#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
        scanf("%d", &arr2[i]);
    }
    int sum = arr2[0];
    int resultArr[n];
    for(int i = 1, j = 1, x = 0; i < n; i++, j++, x++){
        int temp = sum - arr1[i];
        sum = temp + arr2[j];
        resultArr[x] = sum;
    }

    int result = 0;
    for(int i = 0; i < n; i++){
        if(result < resultArr[i]){
            result = resultArr[i];
        }
    }
    printf("%d\n", result);

    return 0;
}
