#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; i++){
        char x[4];
        scanf("%s", x);
        if(x[1] == '+'){
            count++;
        }
        else if(x[1] == '-'){
            count--;
        }
    }
    printf("%d\n", count);

    return 0;
}


#include<stdio.h>
#include<string.h>
int main(){
  int i,t,s=0;
  char x[4];
  scanf("%d",&t);
  for(i=1;i<=t;i++){
    scanf("%s",&x);
    if((strcmp(x,"X++")==0)||(strcmp(x,"++X")==0)){
        s++;
    }
    else if((strcmp(x,"X--")==0)||(strcmp(x,"--X")==0)){
        s--;
    }
    s=s;
  }

printf("%d\n",s);

return 0;
}
