#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int x = 1;
        for(int i = 0; i < n; i++){
            x = x * 2;
            arr[i] = x;
        }
        int a = 0;
        int b = 0;
        for(int i = 0; i < (n / 2) - 1; i++){
            a += arr[i];
        }
        a += arr[n - 1];
        for(int i = (n / 2)- 1; i < n - 1; i++){
            b += arr[i];
        }
        int result = a - b;
        printf("%d\n", result);
    }


    return 0;
}
