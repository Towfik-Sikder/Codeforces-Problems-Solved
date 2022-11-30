#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[101];
        scanf("%s", s);
        int length = strlen(s);
        char sen[50];
        if(length <= 2){
            printf("%s", s);
        }
        else{
            for(int i = 0, j = 0; i < length - 1; i = i + 2, j++){
                sen[j] = s[i];
            }
            int x = (length / 2);
            sen[x] = s[length - 1];

            for(int i = 0; i <= x; i++){
                printf("%c", sen[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
