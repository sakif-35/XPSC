#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    string s;
    map<string,int> mp;
    while(n--){
        cin >> s;
        (mp[s]==0) ? cout << "NO" << endl : cout << "YES" << endl;
        mp[s]++;
    }


    return 0;
}