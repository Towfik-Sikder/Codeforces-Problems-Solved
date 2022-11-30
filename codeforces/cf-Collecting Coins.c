#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int arr[4];
        for(int i = 0; i < 4; i++){
            scanf("%d", &arr[i]);
        }
        int x = arr[3] / 3;
        int y = 0;
        arr[0] += x;
        arr[1] += x;
        arr[2] += x;
        int min = arr[0];
        int min2 = 0;
        int max = arr[0];
        for(int i = 0; i < 3; i++){
            if(min > arr[i]){
                min = arr[i];
                min2 = i;
            }
            if(max < arr[i]){
                max = arr[i];
            }
        }
        if(x == 0){
            y = 0;
        }
        else{
            y = arr[3] - (x * 3);
        }
        arr[min2] += y;
        int deff = (max - arr[0]) + (max - arr[1]) + (max - arr[2]);
        if(deff == 3 || deff == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
