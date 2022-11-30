#include <stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if(year == 1987){
        printf("2013\n");
    }
    else{
        printf("%d\n", year+1);
    }

    return 0;
}
