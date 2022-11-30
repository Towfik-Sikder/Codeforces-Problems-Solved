#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x, y, k;
        scanf("%d %d %d", &x, &y, &k);
        int a = ((k / x) * x) + y;
        if(a <= k){
            printf("%d\n", a);
        }
        else{
            while(a > k){
                a = (((k / x) - 1) * x) + y;
            }
            printf("%d\n", a);
        }
    }


    return 0;
}
