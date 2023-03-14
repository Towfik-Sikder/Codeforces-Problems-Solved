#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        n = n * 2;
        int odd_cnt = 0;
        int even_cnt = 0;
        vector <int> v(n);
        for(int i = 0; i < n; i++){
            cin>> v[i];
            if(v[i] % 2 == 0){
                even_cnt++;
            }
            else{
                odd_cnt++;
            }
        }
        if(odd_cnt == even_cnt){
            cout<< "Yes\n";
        }
        else{
            cout<< "No\n";
        }
    }

    return 0;
}
