#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[101];
        scanf("%s", s);
        int length = strlen(s);
        if(length % 2 != 0){
            printf("NO\n");
        }
        else{
            int count = 0;
            for(int i = 0, j = length / 2; i < length / 2; i++, j++){
                if(s[i] != s[j]){
                    count = 1;
                    break;
                }
            }
            if(count == 0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }


    return 0;
}
