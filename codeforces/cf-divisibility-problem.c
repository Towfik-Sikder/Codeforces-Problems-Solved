#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a < b){
            printf("%d\n", b - a);
        }
        else if(a % b == 0){
            printf("0\n");
        }
        else{
            int m = a % b;
            int r = b - m;
            printf("%d\n", r);
        }
    }

    return 0;
}
