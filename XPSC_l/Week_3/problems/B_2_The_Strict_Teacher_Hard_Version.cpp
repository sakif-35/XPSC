#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,m,q,temp,x;
        cin >> n >> m >> q;
        multiset<int> b; 
        for(int i=0; i<m; i++){
            cin >> temp;
            b.insert(temp);
        }
        int mn = *b.begin(), mx = *b.rbegin();
        for(int i=0; i<q; i++){
            cin >> x;
            int d = 0;
            if(x<mn) d = mn - 1;
            else if(x>mx) d = n - mx;
            else{
                auto it = prev(b.lower_bound(x),1);
                auto it1 = b.upper_bound(x);
                d = (*it1-*it)/2;
            }
            cout << d << endl;
        }
    }

    return 0;
}