#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int h;
    scanf("%d", &h);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(h >= arr[i]){
            count++;
        }
        else{
            count = count + 2;
        }
    }
    printf("%d\n", count);

    return 0;
}
