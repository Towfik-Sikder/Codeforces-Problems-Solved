#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);
        if(n == 1){
            printf("1\n");
        }
        else{
            int result = (n - 2) / x;
            if((n - 2) % x == 0){
                printf("%d\n", result + 1);
            }
            else{
                printf("%d\n", result + 2);
            }
        }
    }



    return 0;
}
