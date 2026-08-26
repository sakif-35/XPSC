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
        char c;
        deque<char> dq;
        for(int i=0; i<n; i++){
            cin >> c;
            dq.push_back(c);
        }
        while(dq.front()!='B') dq.pop_front();
        while(dq.back()!='B') dq.pop_back();
        
        cout << dq.size() << endl;

    }

    return 0;
}