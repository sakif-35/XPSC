#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,x,count=0;
        cin >> n;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=1; i<=n+2; i++){
            pq.push(i);
        }

        while(true){
            count++;
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int c = pq.top();
            pq.pop();
            if(a==n||c==n) break;
            else pq.push(b);
        }
        cout << count << endl;
    }

    return 0;
}