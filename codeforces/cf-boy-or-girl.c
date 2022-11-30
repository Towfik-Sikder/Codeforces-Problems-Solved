#include <stdio.h>
#include <string.h>
int main(){
    char sen[101];
    scanf("%s", sen);
    int length = strlen(sen);
    int count = 0;
    char temp[101];
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(sen[i] > sen[j]){
            temp[i] = sen[i];
            sen[i] = sen[j];
            sen[j] = temp[i];
            }
        }

    }
    for(int i = 0, j = i + 1; i < length; i++, j++){
        if(sen[i] == sen[j]){
            count++;
        }
    }
    int result = length - count;
    if(result % 2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }

    return 0;
}
