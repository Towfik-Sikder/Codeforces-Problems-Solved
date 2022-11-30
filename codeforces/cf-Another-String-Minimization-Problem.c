#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        char s[m + 1];
        for(int i = 0; i < m; i++){
            s[i] = 'B';
        }
        int z = 0;
        for(int i = 0; i < n; i++){
            z = (m + 1) - a[i];
            if(z < a[i]){
                if(s[z - 1] != 'A'){
                    s[z - 1] = 'A';
                }
                else{
                    s[a[i] - 1] = 'A';
                }
            }
            else{
                if(s[a[i] - 1] != 'A'){
                    s[a[i] - 1] = 'A';
                }
                else{
                    s[z - 1] = 'A';
                }
            }
        }
        for(int i = 0; i < m; i++){
            printf("%c", s[i]);
        }
        printf("\n");
    }

    return 0;
}
