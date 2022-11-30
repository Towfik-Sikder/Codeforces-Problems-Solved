#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        while(a > 0 || b > 0){
            if(a > 0){
                printf("0");
                a--;
            }
            if(b > 0){
                printf("1");
                b--;
            }
        }
        printf("\n");
    }

    return 0;
}


