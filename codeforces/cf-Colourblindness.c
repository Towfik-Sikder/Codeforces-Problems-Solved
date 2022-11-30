#include <stdio.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s1[n + 1];
        scanf("%s", s1);
        char s2[n + 1];
        scanf("%s", s2);

        bool x = true;
        for(int i = 0; i < n; i++){
            if(s1[i] == 'G' && s2[i] == 'B'){
                x = true;
            }
            else if(s1[i] == 'B' && s2[i] == 'G'){
                x = true;
            }
            else if(s1[i] == s2[i]){
                x = true;
            }
            else{
                x = false;
            }
            if(x == false){
                break;
            }
        }
        if(x == true){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
