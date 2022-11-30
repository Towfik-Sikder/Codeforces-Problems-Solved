#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int x = n / 3;
        int y = n - x;
        if((n - (x * 2)) - x <= 1){
            int x2 = n - (x * 2);
            printf("%d %d\n", x2, x);
        }
        else{
            int y2 = y / 2;
            printf("%d %d\n", x, y2);
        }
    }


    return 0;
}
