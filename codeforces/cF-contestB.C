#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int length = sizeof(arr) / sizeof(arr[0]);
        while(length <= 2){

        }


    }

    return 0;
}
