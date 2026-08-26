#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,m,q;
        cin >> n >> m >> q; 
        vector<int> b(m),a(q);
        for(int i=0; i<m; i++) cin >> b[i];
        for(int i=0; i<q; i++) cin >> a[i];
        for(int i=0; i<q; i++){
            int d = 0, x = a[i], mn = *min_element(b.begin(),b.end()), mx = *max_element(b.begin(),b.end());
            if(x<mn) d = mn - 1;
            else if(x>mx) d = n - mx;
            else d = (mx-mn)/2;
            cout << d << endl;
        }
    }

    return 0;
}