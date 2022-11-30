#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == s[i + 1]){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
