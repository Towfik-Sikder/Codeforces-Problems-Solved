#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    int count = 0;
    int x = 0;
    while(x < n){
        sum += i;
        x += sum;
        if(x <= n){
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
