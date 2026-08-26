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
        vector<int> vec(n);
        for(int i=0; i<n; i++) vec[i] = i+1;
        //sort(vec.begin(),vec.end(),greater<int>());
        for(int i=n-1; i>=0; i--) cout << vec[i] << " ";
        cout << "\n";

    }

    return 0;
}