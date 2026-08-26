#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m = 0;
    cin >> n;
    string s, f;
    cin >> s;
    map<string,int> mp;
    for(int i=0; i<n-1; i++){
        string p = s.substr(i,2);
        mp[p]++;
        if(mp[p]>m){
            m = mp[p];
            f = p;
        }
    }
    cout << f << endl;

    return 0;
}