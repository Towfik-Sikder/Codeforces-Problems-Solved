//#include <stdio.h>
//int main(){
//    long long int n;
//    scanf("%lld", &n);
//    long long int sum1 = 0;
//    long long int sum2 = 0;
//    for(long long int i = 1; i <= n; i++){
//        if(i % 2 != 0){
//            sum1 = sum1 - i;
//        }
//        else{
//            sum2 = sum2 + i;
//        }
//    }
//    long long int result = sum1 + sum2;
//    printf("%lld\n", result);
//
//
//    return 0;
//}

#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    if(n % 2 == 0){
        printf("%lld\n", n / 2);
    }
    else{
        printf("%lld\n", -(n / 2 + 1));
    }

    return 0;
}
