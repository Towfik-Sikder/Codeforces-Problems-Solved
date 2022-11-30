#include <stdio.h>
#include <string.h>

void sort_array(int *arr, int len){
    for(int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
    char s[101];

    scanf("%s", s);
    int sn[51];
    int length1 = strlen(s);
    int i, j;
    for(i = 0, j = 0; i < length1; i++){
        if(s[i] != '+'){
            sn[j] = s[i];
            j++;
        }
    }

    sort_array(sn, j);

    for(int i = 0; i<j; i++){
        if(i == j-1){
            printf("%c",sn[i]);
        } else {
            printf("%c+",sn[i]);
        }
    }
    return 0;
}
