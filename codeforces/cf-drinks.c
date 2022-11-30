#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    double arr[n];
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
    }
    double result = 0;
    for(int i = 0; i < n; i++){
        result += (arr[i] / n);
    }
    printf("%.12lf\n", result);

    return 0;
}
