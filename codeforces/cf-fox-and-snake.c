#include <stdio.h>
#include <stdbool.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    char c = '#';
    char c1 = '.';
    bool x = true;
    bool y = true;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(x == true){
                printf("%c", c);
            }
        }
        x = false;
        count++;
        printf("\n");
        if(count == n){
            break;
        }
        if(y == true){
            for(int j = 1; j < m; j++){
                if(x == false){
                    printf("%c", c1);
                }
            }
            printf("%c", c);
            x = true;
            y = false;
            count++;
            printf("\n");
        }
        else if(y == false){
            printf("%c", c);
            for(int j = 1; j < m; j++){
                if(x == false){
                    printf("%c", c1);
                }
            }
            x = true;
            y = true;
            count++;
            printf("\n");

        }

    }

    return 0;
}
