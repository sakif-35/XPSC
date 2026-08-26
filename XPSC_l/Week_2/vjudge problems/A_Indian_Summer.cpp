#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin >> n;
        vector<pair<string,string>> vec;
        pair<string, string> p;
        for(int i=0; i<n; i++){
            cin >> p.first >> p.second;
            vec.push_back(p);
        }
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(),vec.end()),vec.end());

        cout << vec.size() << endl;

    return 0;
}