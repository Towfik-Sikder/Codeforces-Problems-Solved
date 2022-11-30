#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int i = n * m;
    int count = 0;
    char c;
    while(i--){
        scanf("%s", &c);
        if(c == 'C' || c == 'M' || c == 'Y'){
            count = 1;
        }
    }
    if(count == 0){
        printf("#Black&White\n");
    }
    else{
        printf("#Color\n");
    }

    return 0;
}
