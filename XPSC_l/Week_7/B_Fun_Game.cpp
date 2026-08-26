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
        string s,ts;
        cin >> s >> ts;
        int x = INT_MAX, y = INT_MAX;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                x  = i;
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(ts[i]=='1'){
                y = i;
                break;
            }
        }

        (y<x) ? cout << "NO\n" : cout << "YES\n";


    }

    return 0;
}