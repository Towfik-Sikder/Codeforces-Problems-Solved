#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int x = 0;
        int y = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] % 2 == 0){
                x++;
            }
            else{
                y++;
            }
        }
        (x > y) ? printf("%d\n", y) : printf("%d\n", x);
    }

    return 0;
}
