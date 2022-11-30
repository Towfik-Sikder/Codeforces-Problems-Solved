#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int sum1 = 0;
        for(int i = 0; i < 3; i++){
            sum1 += n % 10;
            n = n / 10;
        }
        int sum2 = 0;
        for(int i = 0; i < 3; i++){
            sum2 += n % 10;
            n = n / 10;
        }
        if(sum1 == sum2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }


    return 0;
}
