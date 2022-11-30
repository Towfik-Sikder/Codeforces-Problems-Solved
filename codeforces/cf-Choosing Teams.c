#include <stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        int x = arr[i] + k;
        if(x <= 5){
            count++;
        }
    }
    int result = count / 3;
    printf("%d\n", result);



    return 0;
}
