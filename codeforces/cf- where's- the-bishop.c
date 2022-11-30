#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[9][9];
        for(int i = 0; i < 8; i++){
            scanf("%s", s[i]);
        }
        int count = 0;
        int i = 1;
        int j = 0;
        for(i; i < 8; i++){
            for(j; j < 8; j++){
               if(s[i][j] == '#'){
                count++;
                if(count > 1){
                    count = 0;
                }
                else if(count == 1){
                    break;
                }
               }
            }
        }
        printf("%d %d", i, j);

    }

    return 0;
}
