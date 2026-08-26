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
        vector<int> b(n-1), a(n);
        for(int i=0; i<n-1; i++){
            cin >> b[i];
        }
        a[0] = b[0];
        a[n-1] = b[n-2];
        for(int i=1; i<n-1; i++){
            a[i] = b[i-1] | b[i];
        }
        bool flag = true;
        for(int i=0; i<n-1; i++){
            if(b[i]!=(a[i]&a[i+1])){
                flag = false;
                cout << -1 << endl;
                break;
            }
        }
        if(flag){
            for(auto x : a) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}