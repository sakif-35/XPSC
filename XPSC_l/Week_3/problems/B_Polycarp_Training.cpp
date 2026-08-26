#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq;
    while(n--){
        cin >> x;
        pq.push(x);
    }
    int d = 1;
    while(!pq.empty()){
        if(d<=pq.top()){
            pq.pop();
            d++;
        }
        else pq.pop();
    }
    d--;
    cout << d;

    return 0;
}