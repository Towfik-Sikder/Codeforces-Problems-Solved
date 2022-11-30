#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char str[4];
        scanf("%s", str);
        int count = 0;
        if((str[0] == 'Y' || str[0] == 'y') && (str[1] == 'E' || str[1] == 'e') && (str[2] == 'S' || str[2] ==  's')){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
