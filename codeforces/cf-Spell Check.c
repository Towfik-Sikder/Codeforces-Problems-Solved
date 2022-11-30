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
        int x = 0;
        char s2[6] = "Timur";
        if(n != 5){
            printf("NO\n");
        }
        else{
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < n; j++){
                    if(s2[i] == s[j]){
                        count++;
                    }
                }
                if(count > 0){
                    x++;
                    count = 0;
                }
            }
            if(x == 5){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }


    return 0;
}
