#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,x;
        cin >> n;
        map<int,int> mp;
        while(n--){
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for(auto[x,y] : mp){
            pq.push(y);
        }

        while(pq.size()>1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--;
            b--;
            if(a>0) pq.push(a);
            if(b>0) pq.push(b);
        }
        if(pq.empty()) cout << 0 << endl;
        else cout << pq.top() << endl;
    }

    return 0;
}