#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int result = 0;
        for(int i = 0, j = 1; i < n; i++, j++){
            if(arr[i] != arr[j]){
                if(arr[i] == arr[i - 1] || arr[i] == arr[j + 1]){
                    result = j + 1;
                    break;
                }
                else{
                    result = i + 1;
                    break;
                }
            }
        }
        printf("%d\n", result);
    }


    return 0;
}
