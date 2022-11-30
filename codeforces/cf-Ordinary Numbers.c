#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(n < 10){
            printf("%d\n", n);
        }
        else{
            int x = n;
            int count = 0;
            while(x != 0){
                x = x / 10;
                count++;
            }
            int y = 0;
            while(count != 0){
                y = y * 10 + 1;
                count--;
            }
            int sum = 0;
            sum += n / y;
            y = y / 10;
            while(y != 0){
                y = y / 10;
                sum += 9;
            }
            printf("%d\n", sum);
        }

    }


    return 0;
}
