#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        int arr1[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr1[i]);
        }
        int arr2[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr2[i]);
        }

        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < n; i++){
            sum1 += arr1[i];
            sum2 += arr2[i];
        }
        if(n == k){
                  int arr3[n * 2];
        for(int i = 0, j = n; i < n; i++, j++){
            arr3[i] = arr1[i];
            arr3[j] = arr2[i];
        }
        for(int i = 0; i < n * 2; i++){
            for(int j = i + 1; j < n * 2; j++){
                if(arr3[j] > arr3[i]){
                    int temp = arr3[i];
                    arr3[i] = arr3[j];
                    arr3[j] = temp;
                }
            }
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr3[i];
        }
        printf("%d\n", sum);


//            int sum = 0;
//            for(int i = 0; i < n; i++){
//                arr1[i] = arr2[i];
//                sum += arr1[i];
//            }
//            printf("%d\n", sum);
//
////            if(sum1 > sum2){
////                printf("%d\n", sum1);
////            }
////            else{
////                printf("%d\n", sum2);
////            }
        }
        else{
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(arr1[j] > arr1[i]){
                        int temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(arr2[j] > arr2[i]){
                        int temp = arr2[i];
                        arr2[i] = arr2[j];
                        arr2[j] = temp;
                    }
                }
            }
            int sum = 0;
            for(int i = 0; i < k; i++){
                sum += arr2[i];
            }
            for(int i = 0; i < n - k; i++){
                sum += arr1[i];
            }
            if(sum1 > sum){
                printf("%d\n", sum1);
            }
            else{
                printf("%d\n", sum);
            }
        }
    }


    return 0;
}
