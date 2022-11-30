#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char sen[101];
        scanf("%s", sen);
        int length = strlen(sen);
        int midLength = length-2;
        if(length > 10){
            printf("%c%d%c\n", sen[0], midLength, sen[length-1]);
        }
        else{
            printf("%s\n",sen);
        }

    }

    return 0;
}
