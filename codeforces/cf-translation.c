#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s", s);
    char t[101];
    scanf("%s",t);
    int count = 0;
    int length = strlen(s);
    for(int i = 0, j = length - 1; i < length; i++, j--){
        if(s[i] == t[j]){
            count++;
        }
        else{
            count--;
        }
    }
    if(count == length){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
