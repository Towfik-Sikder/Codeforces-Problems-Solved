#include <stdio.h>
int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < 4; i++){
        if(arr[i] != arr[i - 1]){
            for(int j = i + 1; j < 4; j++){
                if(arr[i] == arr[j]){
                    count++;
                    }
                }
            }
    }
    printf("%d\n", count);

    return 0;
}
