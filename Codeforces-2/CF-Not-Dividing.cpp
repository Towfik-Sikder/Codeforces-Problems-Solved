#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++){
            cin>> v[i];
        }
        for(int i = 0, j = 1, k = i - 1; j < n; i++, j++, k++){
            if(v[i] == 1)
            {
                v[i] += 1;
            }
            if(v[j] % v[i] == 0){
                v[j] += 1;
            }
            if(v[i] % v[k] == 0){
                v[i] += 1;
            }
            if(v[j] % v[i] == 0){
                v[j] += 1;
            }

        }
        for(int i = 0; i < n; i++){
            cout<< v[i]<< " ";
        }
        cout<< "\n";
    }


    return 0;
}
