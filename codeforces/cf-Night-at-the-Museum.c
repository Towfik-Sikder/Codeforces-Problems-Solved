#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s", s);
    int count = 0;
    int length = strlen(s);
    for(int i = 0; i < length; i++){
        if(i == 0){
            if(s[i] == 'a'){
                count = 0;
            }
        }
        else{
            int x = 0;
            int y = 0;
            for(int j = 'a'; j <= 'z'; j++){
                if(s[i] != j){
                    x++;
                }
                else{
                    break;
                }
            }
            for(int k = 'z'; k >= 'a'; k--){
                if(s[i] != k){

                }
            }
        }
    }

    return 0;
}
