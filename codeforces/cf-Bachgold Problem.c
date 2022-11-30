#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", n / 2);
    int sum = 0;
    while(sum != n){
        sum += 2;
        if(n - sum == 1){
            sum -= 2;
            sum += 3;
            printf("3 ");
        }
        else{
            printf("2 ");
        }
    }
    printf("\n");


    return 0;
}
