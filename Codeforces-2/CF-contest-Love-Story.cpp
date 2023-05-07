#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "codeforces";
    int t;
    cin>> t;
    while(t--){
        string s2;
        cin>> s2;
        int cnt = 0;
        int i = 0;
        while(s1[i] != '\0'){
            if(s1[i] != s2[i]){
                cnt++;
            }
            i++;
        }
        cout<< cnt<< endl;
    }


    return 0;
}
