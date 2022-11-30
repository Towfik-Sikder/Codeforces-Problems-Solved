#include <stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int minutes = 60 * 4;
    int deff = minutes - k;
    int count = 0;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + (5 * i);
        if(sum <= deff){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
