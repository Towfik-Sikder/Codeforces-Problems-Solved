#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x % 5 == 0){
        int result = x / 5;
        printf("%d\n", result);
    }
    else{
        int result = (x / 5) + 1;
        printf("%d\n", result);
    }

    return 0;
}
