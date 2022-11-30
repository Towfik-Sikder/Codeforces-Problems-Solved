#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        char a[n + 1];
        scanf("%c", a);
        char b[m + 1];
        scanf("%s", b);
        int length = m + n;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(a[j] > a[i]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = i + 1; j < m; j++){
                if(a[j] > a[i]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = a[i];
                }
            }
        }
        for(int i = 0; i < n; i++){
            printf("%c", a[i]);
        }
        for(int i = 0; i < m; i++){
            printf("%c", b[i]);
        }


    }


    return 0;
}
