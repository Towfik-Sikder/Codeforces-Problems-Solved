#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        priority_queue <int> pq;
        int x, y, z;
        cin>> x;
        cin>> y;
        cin>> z;
        pq.push(x);
        pq.push(y);
        pq.push(z);
        pq.pop();
        cout<< pq.top()<< "\n";
    }

    return 0;
}
