#include <stdio.h>
int main(){
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int x = 0;
    int y = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                x = i;
                y = j;
                break;
            }
        }
    }
    if(x < 2){
        x = 2 - x;
    }
    else{
        x = x - 2;
    }
    if(y < 2){
       y = 2 - y;
    }
    else{
        y = y - 2;
    }
    int result = x + y;
    printf("%d\n", result);


    return 0;
}
