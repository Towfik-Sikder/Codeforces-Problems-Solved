#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int c = (n / 3) - 1;
        int b = ((n - c) / 2) + 1;
        int a = (n - c - b);
        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}
