#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s", s);
    int length = strlen(s);
    int upperCase = 0;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            upperCase++;
        }
        i++;
    }
    int lowerCase = length - upperCase;
    if(lowerCase >= upperCase){
        for(int i = 0; i < length; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + 32;
                printf("%c", s[i]);
            }
            else{
                printf("%c", s[i]);
            }
        }
    }
    else{
        for(int i = 0; i < length; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = s[i] - 32;
                printf("%c", s[i]);
            }
            else{
                printf("%c", s[i]);
            }
        }
    }

    return 0;
}
