#include <stdio.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, h, m;
        scanf("%d %d %d", &n, &h, &m);
        int arr1[n];
        int arr2[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr1[i]);
            scanf("%d", &arr2[i]);
        }
        int min = arr1[0];
        for(int i = 0; i < n; i++){
            if(min > arr1[i]){
                min = arr1[i];
            }

        }
        int y = 0;
        for(int i = 0; i < n; i++){
            if(min == arr1[i]){
                y = i;
            }
        }


        if((min == h) && (m == arr2[y])){
            for(int i = 0; i < n; i++){
                if(arr1[i] == h && arr2[i] == m){
                    printf("0 0\n");

                }
            }
        }
        else{
            if(min < h){
                int a = (24 - h) + (min - 1);
                int b = (60 - m) + arr2[y];
                printf("%d %d\n", a, b);
            }
            else{
                int a = (min - 1) - h;
                int b = (60 - m) + arr2[y];
                printf("%d %d\n", a, b);
            }
        }




    }

    return 0;
}
