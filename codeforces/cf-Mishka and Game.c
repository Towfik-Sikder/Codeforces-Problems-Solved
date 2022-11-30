#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0, k = 1; j < 1; j++, k++){
            if(arr[i][j] > arr[i][k]){
                count1++;
            }
            else if(arr[i][j] < arr[i][k]){
                count2++;
            }
        }
    }
    if(count1 == count2){
        printf("Friendship is magic!^^\n");
    }
    else if(count1 > count2){
        printf("Mishka\n");
    }
    else{
        printf("Chris\n");
    }


    return 0;
}
