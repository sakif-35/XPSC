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
        deque<int> dq;
        while(n--){
            cin >> x;
            (x<=dq.front()) ? dq.push_front(x) : dq.push_back(x);
        }
        for(int x : dq) cout << x << " ";
        cout << endl;

    }

    return 0;
}