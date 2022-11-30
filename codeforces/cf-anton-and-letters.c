#include <stdio.h>
#include <string.h>
int main(){
    char s[1001];
    gets(s);
    int length = strlen(s);
    int count = 0;
    int x = 0;
    for(int i = 'a'; i <= 'z'; i++){
        for(int j = 1; j < length; j = j + 3){
            if(i == s[j]){
                x++;
            }
        }
        if(x > 1){
            count++;
            x = 0;
        }
        else if(x == 1){
            count++;
            x = 0;
        }
    }
    printf("%d\n", count);


    return 0;
}
