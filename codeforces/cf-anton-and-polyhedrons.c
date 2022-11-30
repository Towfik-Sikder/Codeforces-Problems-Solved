#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[13];
    int result = 0;
    char t[13] = "Tetrahedron";
    char c[13] = "Cube";
    char o[13] = "Octahedron";
    char d[13] = "Dodecahedron";
    char I[13] = "Icosahedron";
    for(int i = 0; i < n; i++){
        scanf("%s", s);
        if(s[0] == 'T'){
            result = result + 4;

        }
        else if(s[0] == 'C'){
            result = result + 6;

        }
        else if(s[0] == 'O'){
            result = result + 8;

        }
        else if(s[0] == 'D'){
            result = result + 12;

        }
        else if(s[0] == 'I'){
            result = result + 20;

        }
    }

    printf("%d\n", result);

    return 0;
}
