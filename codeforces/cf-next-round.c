#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            if(arr[i] >= arr[k-1]){
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
