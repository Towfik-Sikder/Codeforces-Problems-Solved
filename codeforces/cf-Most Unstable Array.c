#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long int n, m;
        scanf("%lld %lld", &n, &m);
        if(n > 2){
            printf("%d\n", m * 2);

        }
        else{
            printf("%d\n", m * (n - 1));
        }
    }


    return 0;
}
