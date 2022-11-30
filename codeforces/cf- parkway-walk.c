#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int reEnergy = a[0] - m;
        for(int i = 1; i < n; i++){
            int sum = reEnergy + a[i];
            reEnergy = sum;
        }
        if(reEnergy < 1){
            printf("0\n");
        }
        else{
            printf("%d\n", reEnergy);
        }
    }

    return 0;
}
