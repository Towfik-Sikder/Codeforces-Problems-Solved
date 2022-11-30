#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n % 2 == 0){
        int x = n / 2;
        int y = x;
        if(n % 2 != 0){
            y = y + 1;
        }
        if(x % 2 == 0 && y % 2 == 0){
            printf("%d %d\n", x, y);
        }
        else{
            while(x % 2 != 0 && y % 2 != 0){
                x--;
                y++;
            }
            printf("%d %d\n", x, y);
        }
    }
    else{
        int x = n / 2;
        int y = (n / 2) + 1;
        while(x % 2 != 0 || y % 3 != 0){
            x--;
            y++;
        }
        printf("%d %d\n", x, y);
    }

    return 0;
}
