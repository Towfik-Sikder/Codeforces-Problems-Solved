#include <stdio.h>
int main(){
int t;
scanf("%d", &t);
while(t--){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    if(n % 2 != 0){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        if(sum < n * 2){
            if(sum % 2 == 0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
    }
    else{
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                count1++;
            }
            else{
                count2++;
            }
        }
        if(count1 % 2 == 0 && count2 % 2 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

    return 0;

}
