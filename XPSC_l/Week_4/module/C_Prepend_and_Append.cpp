#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        deque<char> dq(n);
        for(int i=0; i<n; i++) cin >> dq[i];
        while(true){
            if(dq.front()==dq.back() || dq.size()<2) break;
            else{
                dq.pop_back();
                dq.pop_front();
            }
        }
        cout << dq.size() << endl;
    }

    return 0;
}