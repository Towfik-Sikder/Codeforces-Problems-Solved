#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", s);
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1 > count2){
        printf("Anton\n");
    }
    else if(count2 > count1){
        printf("Danik\n");
    }
    else{
        printf("Friendship\n");
    }

    return 0;
}
