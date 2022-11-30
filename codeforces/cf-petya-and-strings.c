#include <stdio.h>
#include <string.h>
int main(){
    char sen1[101];
    scanf("%s", sen1);
    char sen2[101];
    scanf("%s", sen2);
    int i = 0;

    while(sen1[i] != '\0'){
        if(sen1[i] >= 'A' && sen1[i] <= 'Z'){
            sen1[i] = sen1[i] + 32;
        }
        if(sen2[i] >= 'A' && sen2[i] <= 'Z'){
            sen2[i] = sen2[i] +32;
        }
        i++;
    }
    int result = strcmp(sen1, sen2);
    printf("%d\n", result);

    return 0;
}
