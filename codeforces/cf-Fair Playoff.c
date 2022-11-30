#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int arr[4];
        for(int i = 0; i < 4; i++){
            scanf("%d", &arr[i]);
        }

        int max = arr[0];
        for(int i = 0; i < 4; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        if(max == arr[0] || max == arr[1]){
            if(max == arr[0]){
                if(arr[1] < arr[2] || arr[1] < arr[3]){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                if(arr[0] < arr[2] || arr[0] < arr[3]){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
        }
        else{
            if(max == arr[2]){
                if(arr[3] < arr[0] || arr[3] < arr[1]){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                if(arr[2] < arr[0] || arr[2] < arr[1]){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
        }
    }

    return 0;
}
