#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char guestsName[101];
    scanf("%s", guestsName);
    char residenceHost[101];
    scanf("%s", residenceHost);
    char letterPile[101];
    scanf("%s", letterPile);
    strcat(guestsName, residenceHost);
    int length1 = strlen(guestsName);
    int length2 = strlen(letterPile);
    bool x = true;
    int count1 = 0;
    int count2 = 0;
        for(int i = 'A'; i <= 'Z'; i++){
            for(int j = 0; j < length2; j++){
                if(x == true){
                    if(i == guestsName[j]){
                        count1++;
                    }

                    if(i == letterPile[j]){
                        count2++;
                    }
                    if(count1 == count2){
                        x = true;
//                        count1 = 0;
//                        count2 = 0;
                    }
                    else{
                        x = false;
                    }
                }
            }
        }
        printf("%d\n%d\n", count1, count2);
//        if(x == true){
//            printf("YES\n");
//        }
//        else if(x == false){
//            printf("NO\n");
//        }

    return 0;
}
