#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x[4];
        for(int i = 0; i < 4; i++){
            scanf("%d", &x[i]);
        }
        int sum = x[0] + x[1] + x[2] + x[3];
        if((sum <= 3) && (sum > 0)){
            printf("1\n");
        }
        else if(sum == 4){
            printf("2\n");
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}
