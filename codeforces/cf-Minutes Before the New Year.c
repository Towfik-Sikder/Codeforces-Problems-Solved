#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int h, m;
        scanf("%d %d", &h, &m);
        int result = ((24 - h) * 60) - m;
        printf("%d\n", result);
    }

    return 0;
}
