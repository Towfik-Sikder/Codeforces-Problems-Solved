#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x;
        scanf("%d", &x);
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(x == 3){
            if(c == 0){
                printf("NO\n");
            }
            else{
                if(c == 2){
                    if(b == 0){
                        printf("NO\n");
                    }
                    else{
                        if(b == 1){
                            printf("YES\n");
                        }
                    }
                }
                else{
                    if(c == 1){
                        if(a == 0){
                            printf("NO\n");
                        }
                        else{
                            if(a == 2){
                                printf("YES\n");
                            }
                        }
                    }
                }
            }
        }
        else if(x == 2){
            if(b == 0){
                printf("NO\n");
            }
            else{
                if(b == 3){
                    if(c == 0){
                        printf("NO\n");
                    }
                    else{
                        if(c == 1){
                            printf("YES\n");
                        }
                    }
                }
                else{
                    if(b == 1){
                        if(a == 0){
                            printf("NO\n");
                        }
                        else{
                            if(a == 3){
                                printf("YES\n");
                            }
                        }
                    }
                }
            }
        }
        else if(x == 1){
            if(a == 0){
                printf("NO\n");
            }
            else{
                if(a == 2){
                    if(b == 0){
                        printf("NO\n");
                    }
                    else{
                        if(b == 3){
                            printf("YES\n");
                        }
                    }
                }
                else{
                    if(a == 3){
                        if(c == 0){
                            printf("NO\n");
                        }
                        else{
                            if(c == 2){
                                printf("YES\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
