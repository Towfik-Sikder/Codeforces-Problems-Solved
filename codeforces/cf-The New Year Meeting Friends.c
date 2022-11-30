#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int arr[3] = {x, y, z};
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(arr[j] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int med = arr[1];
    int result = (arr[0] - arr[1]) + (arr[1] - arr[2]);
    printf("%d\n", result);

    return 0;
}
