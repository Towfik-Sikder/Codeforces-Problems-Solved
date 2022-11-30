#include <stdio.h>
#include <stdbool.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
    bool x = true;
    while(x == true){
        a = a * 3;
        b = b * 2;
        count++;
        if(a > b){
            x = false;
        }
    }
    printf("%d\n", count);

    return 0;
}
