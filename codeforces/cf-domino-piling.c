#include <stdio.h>
int main(){
    int M, N;
    int count = 0;
    scanf("%d%d", &M, &N);
    int x = (M * N);
    for(int i = 2; i <= x; i = i + 2){
        count++;
    }
    printf("%d\n", count);

    return 0;
}
