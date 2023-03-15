#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector <int> v(n);
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin>> v[i];
        sum += v[i];
        if(sum < 0){
            cnt++;
            sum = 0;
        }
    }
    cout<< cnt<< "\n";

    return 0;
}
