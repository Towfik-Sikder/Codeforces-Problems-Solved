#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr1[n * 2];
        for(int i = 0; i < 2 * n; i++){
            scanf("%d", &arr1[i]);
        }
        int x = 1;
        int arr2[n];
        arr2[0] = arr1[0];
        for(int i = 1; i < n * 2; i++){
            for(int j = 0; j < x; j++){
                if(arr1[i] != arr2[j]){
                    arr2[x] = arr1[i];
                    x++;
                }
            }
        }
        for(int i = 0; i < n; i++){
            printf("%d ", arr2[i]);
        }
        printf("\n");
    }


    return 0;
}
