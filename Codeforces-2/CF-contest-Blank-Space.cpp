#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int cnt = 0;
        int ans = 0;
        vector <int> v(n);
        for(int i = 0; i < n; i++){
            cin>> v[i];
            if(v[i] == 0){
                cnt++;
            }
            else if(v[i] == 1){
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(cnt, ans);
        cout<< ans<< endl;

    }

    return 0;
}
