#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    int i = 0;
    while(n != 0){
        if(n >= 100){
            n = n - 100;
            count++;
        }
        else if(n >= 20){
            n = n - 20;
            count++;
        }
        else if(n >= 10){
            n = n - 10;
            count++;
        }
        else if(n >= 5){
            n = n - 5;
            count++;
        }
        else{
            n = n - 1;
            count++;
        }

        i++;
    }
    printf("%d\n", count);

    return 0;
}
