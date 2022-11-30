#include <stdio.h>
int main(){
    long long int t;
    scanf("%d", &t);
    while(t--){
        long long int a, b;
        scanf("%d %d", &a, &b);


        if(a == b){
            printf("0\n");
        }
        else if(a < b){
            int count = 0;
            int x = 10;
            while(a != b){
                a = a + x;
                if(a <= b){
                    count++;
                    if(a == b){
                        break;
                    }
                }
                else{
                    a = a - x;
                    x--;
                }
            }
            printf("%d\n", count);
        }
        else if(a > b){
            int count = 0;
            int x = 10;
            while(a != b){
                a = a - x;
                if(a >= b){
                    count++;
                    if(a == b){
                        break;
                    }
                }
                else{
                    a = a + x;
                    x--;
                }
            }
            printf("%d\n", count);
        }
    }

    return 0;
}
