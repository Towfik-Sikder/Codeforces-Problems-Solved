#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int highest = arr[0];
    for(int i = 0; i < n; i++){
        if(highest < arr[i]){
            highest = arr[i];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + (highest - arr[i]);
    }
    printf("%d\n", sum);


    return 0;
}
