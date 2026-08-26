#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        string s,t;
        cin >> s >> t;
        for(int i=0; i<5; i++){
            if(s[i]==t[i]) cout << "G";
            else cout << "B";
        }
        cout << endl;

    }

    return 0;
}