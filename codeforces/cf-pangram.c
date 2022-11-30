#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int count = 0;
    int y = 0;
    if(n < 26){
        printf("NO\n");
    }
    else{
        for(char i = 'A', j = 'a'; i <= 'Z'; i++, j++){
            for(int x = 0; x < n; x++){
                if(i == s[x] || j == s[x]){
                   y++;
                }
            }
            if(y > 1){
                count++;
                y = 0;
            }
            else if(y == 1){
                count++;
                y = 0;
            }
        }
        if(count == 26){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
