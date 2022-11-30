#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        int count = 0;
        int sum = 0;
        for(char i = 'A'; i <= 'Z'; i++){
            for(int j = 0; j < n; j++){
                if(i == s[j]){
                    count++;
                }
            }
            if(count > 0){
                sum = (count + sum) + 1;
                count = 0;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
