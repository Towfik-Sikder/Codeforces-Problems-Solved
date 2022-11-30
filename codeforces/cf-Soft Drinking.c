#include <stdio.h>
int main(){
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int drinks = ((k * l) / nl) / n;
    int limes = (c * d) / n;
    int salt = (p / np) / n;
    int arr[3] = {drinks, limes, salt};
    int result = arr[0];
    for(int i = 0; i < 3; i++){
        if(result > arr[i]){
            result = arr[i];
        }
    }
    printf("%d\n", result);

    return 0;
}
