#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int count = 0;
    int i;
    for(i = n + 1; i <= m; i++){
        for(int j = 2; j < i; j++){
            if(i % 2 != 0){
                if(count == 0){
                    if(i % j == 0){
                        count = 1;
                    }
                }
            }
            else{
                count = 1;
            }
        }
        if(count == 1){
            count = 0;
        }
        else{
            break;
        }
    }
    if(i == m){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }



    return 0;
}
