#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int big = 0;
    int small = 0;
    if(a > b){
        big = a;
        small = b;
    }
    else{
        big = b;
        small = a;
    }
    int x = big - small;
    int deffSocks = ((big - x) + small) / 2;
    int sameSocks = x / 2;
    printf("%d %d\n", deffSocks, sameSocks);


    return 0;
}
