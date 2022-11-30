#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        if(n % 2 == 0){
            int result = n / 2 - 1;
            printf("%d\n", result);
        }
        else{
            int result = n / 2;
            printf("%d\n", result);
        }

    }

    return 0;
}
