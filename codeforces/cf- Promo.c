#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    while(q--){
        int x, y;
        scanf("%d %d", &x, &y);

        int temp;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[j] >= arr[i]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        long long int sum = 0;
        for(int i = x - y; i < x; i++){
            sum += arr[i];
        }
        printf("%lld\n", sum);
    }

    return 0;
}
