#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a;
    int b = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a != b){
            count++;
        }
        b = a;
    }
    printf("%d\n", count);

    return 0;
}
