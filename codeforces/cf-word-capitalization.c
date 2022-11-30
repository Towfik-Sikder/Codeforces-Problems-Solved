#include <stdio.h>
int main(){
    char sen[1001];
    scanf("%s", sen);
    if(sen[0] >= 'a' && sen[0] <= 'z'){
        sen[0] = sen[0] - 32;
    }
    printf("%s", sen);
    return 0;
}
