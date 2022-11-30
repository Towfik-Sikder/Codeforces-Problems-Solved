#include <stdio.h>
#include <string.h>
int main(){
    char s1[101];
    scanf("%s", s1);
    char s2[101];
    scanf("%s", s2);
    int length = strlen(s1);
    for(int i = 0; i < length; i++){
        if(s1[i] == '1' && s2[i] == '0'){
            printf("1");
        }
        else if(s1[i] == '0' && s2[i] == '1'){
            printf("1");
        }
        else{
            printf("0");
        }
    }

    return 0;
}
