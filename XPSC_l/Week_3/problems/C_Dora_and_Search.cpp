#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,l,r;
        cin >> n;
        deque<int> dq(n);
        for(int i=0; i<n; i++) cin >> dq[i];
        l = 1, r = n;
        bool flag = false;
        int mn = 1, mx = n;
        while(dq.size()>3 && !flag){
            bool lf = true, rf = true;
            if(*dq.begin()==mx){
                lf = false;
                l++;
                mx--;
                dq.pop_front();
            }
            else if(*dq.begin()==mn){
                lf = false;
                l++;
                dq.pop_front();
                mn++;
            }
            if(*dq.rbegin()==mx){
                rf = false;
                r--;
                mx--;
                dq.pop_back();
            }
            else if(*dq.rbegin()==mn){
                rf = false;
                r--;
                mn++;
                dq.pop_back();
            }
            if(lf && rf) flag = true;
        }

        (flag) ? cout << l << " " << r << endl : cout << -1 << endl;
    }

    return 0;
}