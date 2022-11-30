#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[5];
        scanf("%s", s);
        int length = strlen(s);
        if(s[0] == '1'){
            if(length == 1){
                printf("%d\n", length);
            }
            else if(length == 2){
                printf("%d\n", length + 1);
            }
            else if(length == 3){
                printf("%d\n", length + 3);
            }
            else{
                printf("%d\n", length + 6);
            }
        }
        else if(s[0] == '2'){
            if(length == 1){
                printf("%d\n", length + 10);
            }
            else if(length == 2){
                printf("%d\n", length + 11);
            }
            else if(length == 3){
                printf("%d\n", length + 13);
            }
            else{
                printf("%d\n", length + 16);
            }
        }
        else if(s[0] == '3'){
            if(length == 1){
                printf("%d\n", length + 20);
            }
            else if(length == 2){
                printf("%d\n", length + 21);
            }
            else if(length == 3){
                printf("%d\n", length + 23);
            }
            else{
                printf("%d\n", length + 26);
            }
        }
        else if(s[0] == '4'){
            if(length == 1){
                printf("%d\n", length + 30);
            }
            else if(length == 2){
                printf("%d\n", length + 31);
            }
            else if(length == 3){
                printf("%d\n", length + 33);
            }
            else{
                printf("%d\n", length + 36);
            }
        }
        else if(s[0] == '5'){
            if(length == 1){
                printf("%d\n", length + 40);
            }
            else if(length == 2){
                printf("%d\n", length + 41);
            }
            else if(length == 3){
                printf("%d\n", length + 43);
            }
            else{
                printf("%d\n", length + 46);
            }
        }
        else if(s[0] == '6'){
            if(length == 1){
                printf("%d\n", length + 50);
            }
            else if(length == 2){
                printf("%d\n", length + 51);
            }
            else if(length == 3){
                printf("%d\n", length + 53);
            }
            else{
                printf("%d\n", length + 56);
            }
        }
        else if(s[0] == '7'){
            if(length == 1){
                printf("%d\n", length + 60);
            }
            else if(length == 2){
                printf("%d\n", length + 61);
            }
            else if(length == 3){
                printf("%d\n", length + 63);
            }
            else{
                printf("%d\n", length + 66);
            }
        }
        else if(s[0] == '8'){
            if(length == 1){
                printf("%d\n", length + 70);
            }
            else if(length == 2){
                printf("%d\n", length + 71);
            }
            else if(length == 3){
                printf("%d\n", length + 73);
            }
            else{
                printf("%d\n", length + 76);
            }
        }
        else if(s[0] == '9'){
            if(length == 1){
                printf("%d\n", length + 80);
            }
            else if(length == 2){
                printf("%d\n", length + 81);
            }
            else if(length == 3){
                printf("%d\n", length + 83);
            }
            else{
                printf("%d\n", length + 86);
            }
        }

    }


    return 0;
}
