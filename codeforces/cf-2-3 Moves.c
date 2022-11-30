#include <stdio.h>
int main(){
    long long int t;
    scanf("%lld", &t);
    while(t--){
        long long int n;
        scanf("%lld", &n);
        long long int result = 0;
        if(n == 1){
            printf("2\n");
        }
        else if(n == 2){
            printf("1\n");
        }
        else if(n == 3){
            printf("1\n");
        }
        else if(n == 4){
            printf("2\n");
        }
        else{
            result = n / 3;
            if(n - (result * 3) == 2){
                result += 1;
                printf("%lld\n", result);
            }
            else if(n - (result * 3) == 1){
                result += 1;
                printf("%lld\n", result);
            }
            else if(n - (result * 3) == 0)
                printf("%lld\n", result);
        }
    }

    return 0;
}
