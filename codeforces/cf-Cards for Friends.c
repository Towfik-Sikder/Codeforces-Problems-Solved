#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int w, h;
        scanf("%d %d", &w, &h);
        long long int n;
        scanf("%lld", &n);
        if(w % 2 != 0 && h % 2 != 0){
            if(n == 1){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            if(w * h >= n){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }

    return 0;
}
