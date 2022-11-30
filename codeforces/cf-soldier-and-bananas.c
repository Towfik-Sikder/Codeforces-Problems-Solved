#include <stdio.h>
int main(){
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int sum_of_k_bananas_price;

    for(int i = 1; i <= w; i++){
        int x = k * i;
        sum_of_k_bananas_price += x;
    }
    int borrowMoney = sum_of_k_bananas_price - n;
    if(sum_of_k_bananas_price > n){
        printf("%d\n", borrowMoney);
    }
    else{
        printf("0\n");
    }


    return 0;
}
