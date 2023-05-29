#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector <int> v1(n);
        for(int i = 0; i < n; i++){
            cin>> v1[i];
        }
        vector <int> v2;
        for(int i = 0, j = n - 1; i <= j; i++, j--){
            v2.push_back(v1[i]);
            v2.push_back(v1[j]);
        }
        for(int i = 0; i < n; i++){
            cout<< v2[i]<< " ";
        }
        cout<< endl;

    }

    return 0;
}
