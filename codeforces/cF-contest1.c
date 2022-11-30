#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);
        int count = 0;
        int arr[4] = {a, b, c, d};
        for(int i = 1; i < 4; i++){
            if(arr[0] < arr[i]){
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
