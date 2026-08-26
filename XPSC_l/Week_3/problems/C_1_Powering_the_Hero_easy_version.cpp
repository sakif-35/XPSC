#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n, x;
        long long power = 0;
        cin >> n;
        priority_queue<int> pq;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x>0) pq.push(x);
            else{
                if(!pq.empty()){
                    power += pq.top();
                    pq.pop();
                } 
            }
        }
        cout << power << endl;
    }

    return 0;
}