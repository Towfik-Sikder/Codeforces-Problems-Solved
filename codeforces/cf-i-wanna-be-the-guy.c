#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int p;
    scanf("%d", &p);
    int x[p];
    for(int i = 0; i < p; i++){
        scanf("%d", &x[i]);
    }
    int q;
    scanf("%d", &q);
    int y[q];
    for(int i = 0; i < q; i++){
        scanf("%d", &y[i]);
    }
    int count = 0;
    int z = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(i == x[j] || i == y[j]){
                z++;
            }
        }
        if(z > 1){
            count++;
            z = 0;
        }
        else if(z == 1){
            count++;
            z = 0;
        }
    }
    if(count == n){
        printf("I become the guy.\n");
    }
    else{
        printf("Oh, my keyboard!\n");
    }

    return 0;
}
