#include <stdio.h>
#include <string.h>
int main(){
    char n[1000001];
    scanf("%s", n);
    int length = strlen(n);
    int count = 0;
    for(int i = 0; i < length; i++){
        if(n[i] == '4'){
            count++;
        }
        if(n[i] == '7'){
            count++;
        }
    }
    if(count == 4 || count == 7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}
