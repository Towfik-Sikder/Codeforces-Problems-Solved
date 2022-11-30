#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int p[n];
    int q[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
        scanf("%d", &q[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if((q[i] - p[i]) >= 2){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
